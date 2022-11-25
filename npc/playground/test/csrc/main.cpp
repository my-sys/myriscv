#include "emulator.h"

static char *diff_so_file = NULL;
static char *img_file = NULL;

extern void init_ram(const char* img_file);
static int parse_args(int argc, char *argv[]){

}
void welcome(){
    printf("^_^ ***welcome to start debug in npc ***  O(∩_∩)O~\n");
}
int main(int argc, char** argv){
    parse_args(argc,argv);
    init_ram(img_file);
    /* Initialize differential testing. */
    //init_difftest(diff_so_file, img_size, difftest_port);
    init_sdb();

    // init_disasm();
    welcome();

    // start npc debug
    sdb_mainloop();
}
