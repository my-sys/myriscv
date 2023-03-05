#include <nterm.h>
#include <stdarg.h>
#include <unistd.h>
#include <SDL.h>

static void sh_printf(const char *format, ...);
char handle_key(SDL_Event *ev);

static int cmd_echo(char *args){
	sh_printf("%s\n",args);
	return 0;
}

static int cmd_export(char *args){
	char *name = strtok(args, "=");
	char *value = name + strlen(name) + 1;
	setenv(name,value,0);
	return 0;
}
static struct{
	const char *name;
	int (*handler) (char *);
}cmd_table [] = {
	{"echo",cmd_echo},
	{"export",cmd_export},
};
#define ARRLEN(arr) (int)(sizeof(arr) / sizeof(arr[0]))
#define NR_CMD ARRLEN(cmd_table)
static void sh_printf(const char *format, ...) {
  static char buf[256] = {};
  va_list ap;
  va_start(ap, format);
  int len = vsnprintf(buf, 256, format, ap);
  va_end(ap);
  term->write(buf, len);
}

static void sh_banner() {
  sh_printf("Built-in Shell in NTerm (NJU Terminal)\n\n");
}

static void sh_prompt() {
  sh_printf("sh> ");
}

static void sh_handle_cmd(const char *cmd) {
	printf("cmd %s\n",cmd);
	char str[50]={'\0'};
	strcpy(str,cmd);
	char *str_end = str + strlen(str);
	char *cmd1 = strtok(str, "\r");
	cmd1 = strtok(cmd1," ");
	printf("cmd1 %s\n",cmd1);
	if(cmd1 == NULL)return;

	char *args = cmd1 + strlen(cmd1) + 1;
	if (args >= str_end) {
		args = NULL;
	}
	for(int i = 0; i < NR_CMD; i++){
		if (strcmp(cmd1, cmd_table[i].name) == 0){
			int temp = cmd_table[i].handler(args);
			if(temp == 0)return;
			break;
		}
	}
	char *argv[2]={NULL,NULL};
	argv[0] = cmd1;
	printf("cmd1 %s\n",cmd1);
	if(execvp(argv[0],argv) == -1){
		execve(argv[0],argv,NULL);
	}
}

void builtin_sh_run() {
  sh_banner();
  sh_prompt();

  while (1) {
    SDL_Event ev;
    if (SDL_PollEvent(&ev)) {
      if (ev.type == SDL_KEYUP || ev.type == SDL_KEYDOWN) {
        const char *res = term->keypress(handle_key(&ev));
        if (res) {
          sh_handle_cmd(res);
          sh_prompt();
        }
      }
    }
    refresh_terminal();
  }
}
