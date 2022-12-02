#include "sdb.h"
#include <readline/readline.h>
#include <readline/history.h>
#include "emulator.h"
#include "ram.h"
#include "disasm.h"
void init_regex();
void init_wp_pool();


static void trace_and_difftest()
{
#ifdef CONFIG_ITRACE
  uint64_t reg[2];
  Emulator::get_instance().read_pc_and_inst(reg);
  char logbuf[128];
  char *p = logbuf;
  p += snprintf(p, sizeof(logbuf), "0x%016lx" ":", reg[0]);

  uint8_t *inst = (uint8_t *)&reg[1];
  for (int i = 0; i < 4; i ++) {
    p += snprintf(p, 4, " %02x", inst[i]);
  }
  //extern void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
  disassemble(p, logbuf + sizeof(logbuf) - p, reg[0],(uint8_t *)&reg[1],4);
  puts(logbuf);
#endif 
}

static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(npc) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args) {
  // -1 is the max number?? uint---- zhoutao
  //cpu_exec(-1);
  Emulator::get_instance().execute(-1);
  return 0;
}

static int cmd_q(char *args) {
    //printf("nemu quit!!!\n");
	Emulator::get_instance().close();
    return 255;
}

static int cmd_si(char *args){
    if(args == NULL){
        Emulator::get_instance().execute(1);
        return 0;
    }
   
    int num = atoi(args);
    if(num<=0){
        printf("you maybe input a illegal number!!!!\n");
        return 0;
    }
    Emulator::get_instance().execute(num);
	trace_and_difftest();
    return 0;
}

void isa_reg_display(){
  uint64_t reg[35];
  Emulator::get_instance().read_regs(reg);
#define gpr(x) reg[x]
    printf("$0($0) = %lx, $1(ra) = %lx, $2(sp) = %lx, $3(gp) = %lx \n",gpr(0),gpr(1),gpr(2),gpr(3));
    printf("$4(tp) = %lx, $5(t0) = %lx, $6(t1) = %lx, $7(t2) = %lx \n",gpr(4),gpr(5),gpr(6),gpr(7));
    printf("$8(s0) = %lx, $9(s1) = %lx, $10(a0) = %lx, $11(a1) = %lx \n",gpr(8),gpr(9),gpr(10),gpr(11));
    printf("$12(a2) = %lx, $13(a3) = %lx, $14(a4) = %lx, $15(a5) = %lx \n",gpr(12),gpr(13),gpr(14),gpr(15));
    printf("$16(a6) = %lx, $17(a7) = %lx, $18(s2) = %lx, $19(s3) = %lx \n",gpr(16),gpr(17),gpr(18),gpr(19));
    printf("$20(s4) = %lx, $21(s5) = %lx, $22(s6) = %lx, $23(s7) = %lx \n",gpr(20),gpr(21),gpr(22),gpr(23));
    printf("$24(s8) = %lx, $25(s9) = %lx, $26(s10) = %lx, $27(s11) = %lx \n",gpr(24),gpr(25),gpr(26),gpr(27));
    printf("$28(t3) = %lx, $29(t4) = %lx, $30(t5) = %lx, $31(t6) = %lx \n",gpr(28),gpr(29),gpr(30),gpr(31));  
}

void isa_csr_reg_display(){
  printf("This operation has not yet been done !\n");
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
        display_watchpoint();
        return 0;
    }
    if(strncmp("csr",args,3)==0){
        isa_csr_reg_display();
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
    word_t paddr = strtoul(str_addr,NULL,16); 
    if(paddr == 0){
        if(strncmp(str_addr,"0x00000000",10)!=0){
            printf("You must follow the format strictly !!! error input!!! \n");
            return 0;
         }
    }
    // It maybe read the virtual memory not the physical memory ????
    printf("The physical memory scan ~~~~~\n");
    for(int i =0; i < num; i++){

        word_t value =  mem_read(paddr + i*4, 4);
       printf("paddr: 0x%lx, value: 0x%lx \n",paddr + i*4, value);
    }
    return 0;
}

static int cmd_p(char *args){
    bool success = true;
    word_t value =  expr(args, &success);
    if(success == true){
        printf("expr: %s , value: 0x%lx \n",args,value);
    }else {
        printf("0x%lx \n",value);
        printf("error expr !!!! \n");
    }

    return 0;
}

static int cmd_w(char *args){
    create_watchpoint(args);    
    return 0;
}

static int cmd_d(char *args){
    int num = atoi(args);
    // exits risks when num = 0; really!
    if(num >=32){
        printf("error input \n");
        return 0;
    }
    delete_watchpoint(num);
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
  { "info", "info SUBCMD,printf the registers' status info r, printf the watchpoint  info w, printf csr info csr", cmd_info},
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

void sdb_mainloop() {


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

//#ifdef CONFIG_DEVICE
//    extern void sdl_clear_event_queue();
//    sdl_clear_event_queue();
//#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
          int temp = cmd_table[i].handler(args);
          if(temp<0){return;}
          else if(temp == 255){printf("nemu quit!!!\n");exit(0);}
       // if (cmd_table[i].handler(args) < 0) { return; }
       // if (cmd_table[i].handler(args)== 255){printf("nemu quit!!!\n"); exit(0);};
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

