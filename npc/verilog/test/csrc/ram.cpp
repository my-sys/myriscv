#include "ram.h"
#include "./device/device.h"
#include "difftest.h"
#define RAMSIZE (128 * 1024 * 1024)
static uint64_t ram[RAMSIZE/sizeof(uint64_t)];
static uint64_t imgfile_size = 0;

uint8_t* guest_to_host(paddr_t paddr){ return (uint8_t *)(ram + paddr - 0x80000000);}

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
	uint64_t real_addr = (addr - 0x80000000)>>3;
    return ram[real_addr];
} 

extern "C" void ramCtrl(paddr_t raddr, uint64_t *rdata, uint8_t rflag,paddr_t waddr, uint64_t wdata, uint64_t wmask, uint8_t wen){
    //device address map 
	// clint 0x0200_0000 ~ 0x200_FFFF 
	// uart 0x1000_0000 ~  0x1000_0FFF 
	// spi  0x1000_1000 ~ 0x1000_1FFF 
	// vga  0x1000_2000 ~ 0x1000_2FFF 
	// ps2  0x1000_3000 ~ 0x1000_3FFF 
	// Ethernet 0x1000_4000 ~ 0x1000_4FFF 
	// flash 0x3000_0000 ~ 0x3fff_ffff 
	// chiplink 0x4000_0000 ~ 0x7fff_ffff 
	// mem 0x8000_0000 ~ 0xfbff_ffff 
	// sdram 0xfc00_0000 ~ 0xffff_ffff 
	// if(((rflag!=0)  && (raddr < 0x80000000)) || ((wen != 0)&&(waddr<0x80000000))){
	// 	difftest_skip_ref();
	// }
	if(waddr < 0x80000000){
		if(wen){
			if(waddr < 0x01ffffff){ //VGA buffer
				vga_buffer_write(waddr,wdata);
			}else if((0x10000000<=waddr) & (waddr <=0x10000FFF)){ // uart
				// printf("waddr %lx, wmask %lx\n",waddr,wmask);
				// *rdata = 0;
				// return;
				assert((waddr == 0x10000000)&(wmask == 0xff));
				serial_write(waddr-0x10000000,wdata);
			}else if((0x10002000<=waddr) & (waddr <= 0x10002FFF)){ // vga
				vga_write(waddr - 0x10002000,wdata);
			}else if((0x10003000<=waddr)&(waddr <= 0x10003FFF)){ //keyboard
				assert(0);
			}
		}
	}else{
		waddr = (waddr - 0x80000000)>>3;
		if(wen){
			ram[waddr] = (ram[waddr] & (~wmask)) | (wdata & wmask);
    	}
	}
	
	if(raddr< 0x80000000){
		if(raddr < 0x01ffffff){	// vga buffer
			*rdata = 0;
		}else if((0x10000000<=raddr)&(raddr <= 0x10000fff)){ // uart
			*rdata = 0;
		}else if((0x10002000<=raddr) & (raddr <= 0x10002FFF)){ // vga
			*rdata = vga_read(raddr - 0x10002000);
		}else if((0x10003000<=raddr)&(raddr <= 0x10003FFF)){ //keyboard
			*rdata = keyboard_read(raddr - 0x10003000);
		}else if((0x10005000<=raddr)&(raddr <= 0x2FFFFFFF)){
			*rdata = rtc_read(raddr - 0x10005000);
		}
	}else{
		if(raddr&0xfffffff0 == 0x81eafff0){
			printf(" 0x81eafff0 = 0x%lx\n",*rdata);
		}
		// if((raddr == 0x80008f70) |(raddr == 0x80008f78)){
		// 	raddr = (raddr - 0x80000000)>>3;
		// 	*rdata = ram[raddr];
		// 	printf(" aa 0x%lx\n",*rdata);
		// }else{
		raddr = (raddr - 0x80000000)>>3;
		*rdata = ram[raddr];
		//}

	}
}
