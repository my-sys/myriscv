#include "ram.h"
#define RAMSIZE (128 * 1024 * 1024)
static uint64_t ram[RAMSIZE/sizeof(uint64_t)];
static uint64_t imgfile_size = 0;

uint8_t* guest_to_host(paddr_t paddr){ return ram + paddr - 0x80000000;}

uint64_t get_img_size(){
    return imgfile_size;
}

uint64_t init_ram(const char* img_file){
    if(img_file == NULL){
        printf("img_file is NULL \n");
        assert(0);
    }
	printf("img_file path : %s\n",img_file);
    FILE *fp = fopen(img_file, "rb");
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
    int ret = fread(ram, imgfile_size,1,fp);
	if(ret != 1){
		printf("error fread ret %d\n",ret);
		assert(0);
	}
    fclose(fp);
	return imgfile_size;
}

uint64_t mem_read(uint64_t addr, int len){
    // addr , len 要进行额外处理以下。
	uint64_t real_addr = addr - 0x80000000;
    return ram[real_addr];
} 

extern "C" void ramCtrl(paddr_t raddr, uint64_t *rdata, paddr_t waddr, uint64_t wdata, uint8_t wstrb, uint8_t wen){
//    printf(" ramCtrl %lx\n",raddr);
    if(raddr< 0x80000000){
		*rdata = 0;
		return;
	}
    raddr = (raddr - 0x80000000)>>3;
	waddr = (waddr - 0x80000000)>>3;
//	printf(" ramCtrl haha12 %lx\n",raddr); 
	*rdata = ram[raddr];
//	printf(" ramCtrl haha1233 %lx\n",raddr); 
    if(wen){
        switch(wstrb){
            case 0x1: ram[waddr] = (ram[waddr] & 0xffffffffffffff00) | (wdata &0xff);break;
            case 0x3: ram[waddr] = (ram[waddr] & 0xffffffffffff0000) | (wdata &0xffff);break;
            case 0xf: ram[waddr] = (ram[waddr] & 0xffffffff00000000) | (wdata &0xffffffff);break;
            case 0xff: ram[waddr] = wdata;break;
            default:  printf("mem write falied is not 8,16,32,64\n");assert(0);
        }
    }
//	printf(" ramCtrl haha %lx\n",raddr); 
}
