#include "emulator.h"
#include <getopt.h>
#include "sdb.h"
#include "disasm.h"
#include "difftest.h"
#include "./device/device.h"
static char *diff_so_file = NULL;
static char *img_file = NULL;
static char *log_file = NULL;

extern uint64_t init_ram(const char* img_file);

static int parse_args(int argc, char *argv[]){
    const struct option table[] = {
        {"log"      , required_argument, NULL, 'l'},
        {"diff"     , required_argument, NULL, 'd'},
        {0          , 0                , NULL, 0},
    };
    int opt;
    for(int i =0 ;i<argc;i++){
      printf("i= %d, %s\n",i,argv[i]);
    } 
    while((opt = getopt_long(argc, argv, "-l:d:",table, NULL)) != -1){
        switch(opt){
            case 'l': log_file = optarg; break;
            case 'd': diff_so_file = optarg;break;
            case 1  : img_file = optarg;return 0;
            default: ;
        }
    }
    return 0;   
}
void welcome(){
    printf("^_^ ***welcome to start debug in npc ***  O(∩_∩)O~\n");
}
int main(int argc, char** argv){
    parse_args(argc,argv);
    uint64_t img_size = init_ram(img_file);
    /* Initialize differential testing. */
#ifdef CONFIG_DIFFTEST
    init_difftest(diff_so_file, img_size, 1023);
#endif
    init_sdb();

#ifdef CONFIG_ITRACE
	//extern void init_disasm(const char *triple);
	init_disasm("riscv64""-pc-linux-gnu");
#endif
    // init_disasm();

    welcome();
	init_device();
    // start npc debug
    sdb_mainloop();

}
