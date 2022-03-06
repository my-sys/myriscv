#include <isa.h>
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"
#include <memory/vaddr.h>

static int is_batch_mode = false;

void init_regex();
void init_wp_pool();

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args) {
  // -1 is the max number?? uint---- zhoutao
  cpu_exec(-1);
  return 0;
}


static int cmd_q(char *args) {
    
    return -1;
}

static int cmd_si(char *args){
    if(args == NULL){
        cpu_exec(1);
        return 0;
    }
   
    int num = atoi(args);
    if(num<=0){
        printf("you maybe input a illegal number!!!!\n");
        return 0;
    }
    cpu_exec(num);
    return 0;
}

static int cmd_info(char *args){
    if(args == NULL ){
        printf("You must follow the format strictly!!!! not have more space and .etc !!!!\n");
        return 0;
    }
    if(strncmp("r",args,1)==0){
         isa_reg_display(); 
         return 0;
    }
    if(strncmp("w",args,1)==0){
        
        return 0;
    }
    printf("You must follow the format strictly!!!! not have more space and .etc !!!!\n");
    return 0;
}

static int cmd_x(char *args){
    if(args == NULL ){
        printf("You must follow the format strictly!!!!\n");
        return 0;
    }
    char *str_num = strtok(args, " ");
    int num = atoi(str_num);
    if(num <= 0){
        printf("You must follow the format strictly !!! error input!!! \n");
        return 0;
    }
    char *str_addr = strtok(NULL," ");
    word_t vaddr = strtoul(str_addr,NULL,16); 
    if(vaddr == 0){
        if(strncmp(str_addr,"0x00000000",10)!=0){
            printf("You must follow the format strictly !!! error input!!! \n");
            return 0;
         }
    }
    // It maybe read the virtual memory not the physical memory ????
    printf("The virtual memory scan ~~~~~\n");
    for(int i =0; i < num; i++){

        word_t value =  vaddr_read(vaddr + i*4, 4);
        printf("vaddr: %lx, value: %lx \n",vaddr + i*4, value);
    }
    return 0;
}

static int cmd_p(char *args){

    return 0;
}

static int cmd_w(char *args){

    return 0;
}

static int cmd_d(char *args){

    return 0;
}

static int cmd_help(char *args);

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display informations about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
  { "si", "si [N],Step through n instructions and stop. defalt N = 1", cmd_si},
  { "info", "info SUBCMD,printf the registers' status info r, printf the watchpoint  info w", cmd_info},
  { "x", "x N EXPR,scan memory. Evaluate the expression EXPR, using the result as the starting memory address, output \
      N consecutive 4-bytes in hexadecimal", cmd_x },
  { "p", "p EXPR, Evaluate the expression EXPR", cmd_p },
  { "w", "w EXPR, set watchpoint , It means stopping the program when the expression EXPR has changed!",cmd_w },
  { "d", "d N, delete the watchpoint whoes number is N !", cmd_d },

  /* TODO: Add more commands */

};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
