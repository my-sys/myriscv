#include "emulator.h"

static char *diff_so_file = NULL;
static char *img_file = NULL;

extern void init_ram(const char* img_file);
static int parse_args(int argc, char *argv[]){

}
int main(int argc, char** argv){
    
    init_ram(img_file);
    
}
