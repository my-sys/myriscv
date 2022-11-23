#include "common.h"
#define RAMSIZE (128 * 1024 * 1024)
static uint64_t ram[RAMSIZE/sizeof(uint64_t)];
static uint64_t imgfile_size = 0;

uint64_t get_img_size(){
    return imgfile_size;
}

void init_ram(const char* img_file){
    if(img_file == NULL){
        printf("img_file is NULL \n");
        assert(0);
    }
    FILE *fp = fopen(img_file, "rb+");
    if(fp == NULL){
        printf("can not open %s !!!\n",img_file);
        assert(0);
    }

    fseek(fp,0,SEEK_END);
    imgfile_size = ftell(fp);
    if(imgfile_size > RAMSIZE){
        printf("!!!!!!!!!!! img size over the ram !!!!!!!!!!!!!!!!!\n");
    }
    fseek(fp,0,SEEK_SET);
    fread(ram, imgfile_size/8,8,fp);

    fclose(fp);
}

extern "C" void ramCtrl(paddr_t raddr, uint64_t *rdata, paddr_t waddr, uint64_t wdata, uint8_t wstrb, uint8_t wen){
    *rdata = ram[raddr];
    if(wen){
        switch(wstrb){
            case 0x1: ram[waddr] = (ram[waddr] & 0xffff_ffff_ffff_ff00) | (wdata &0xff);break;
            case 0x3: ram[waddr] = (ram[waddr] & 0xffff_ffff_ffff_0000) | (wdata &0xffff);break;
            case 0xf: ram[waddr] = (ram[waddr] & 0xffff_ffff_0000_0000) | (wdata &0xffff_ffff);break;
            case 0xff: ram[waddr] = wdata;break;
            default:  printf("mem write falied is not 8,16,32,64\n");assert(0);
        }
    }
}
