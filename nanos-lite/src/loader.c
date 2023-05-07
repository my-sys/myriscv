#include <proc.h>
#include <elf.h>
#include <stdio.h>
#include <fs.h>
#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Phdr Elf32_Phdr
#endif

static uintptr_t loader(PCB *pcb, const char *filename) {

  int len;
  int fd = fs_open(filename,0,0);
  if(fd == -1){
	printf("%s no such file\n",filename);
	assert(0);
  }
  //printf(" fs_open %d\n",fd);
  Elf64_Ehdr elf_head;
  fs_read(fd,&elf_head,sizeof(Elf64_Ehdr));
  // printf("abcddd \n");
  //开辟Program_header Table 空间，大小为每一项大小sizeof(Elf64_Phdr)*项数
  Elf64_Phdr *phdr = (Elf64_Phdr*)malloc(sizeof(Elf64_Phdr)*elf_head.e_phnum);
  // printf("abcqqd \n");
  //确定Program_header Table 位置
  len = fs_lseek(fd, elf_head.e_phoff, SEEK_SET);
  if(len <0){printf("error\n");}
  //读取出Program_header Table 内容
  len = fs_read(fd,phdr,sizeof(Elf64_Phdr)*elf_head.e_phnum);
  int idx;
  //printf("abcd \n");
  for(idx = 0; idx < elf_head.e_phnum; idx++){
	//判断是否为LOAD类型，如果是，ramdisk的内容，将会搬运到相应的位置
    if(phdr[idx].p_type == PT_LOAD){
      printf("elf 0x%x, 0x%x,0x%x \n",(uint32_t)phdr[idx].p_vaddr,(uint32_t)phdr[idx].p_filesz,(uint32_t)phdr[idx].p_offset);
	  // 调整读指针位置，原因可能存在多个load类型的选项
      fs_lseek(fd, phdr[idx].p_offset, SEEK_SET);
	  // 把程序内容搬运到对应的虚拟地址
      fs_read(fd,(uint8_t *)phdr[idx].p_vaddr,phdr[idx].p_filesz);
      //printf("elf 0x%x, 0x%x,0x%x \n",(uint32_t)phdr[idx].p_vaddr,(uint32_t)phdr[idx].p_filesz,(uint32_t)phdr[idx].p_offset);
      //printf("mem1 0x%x,offset 0x%x\n",*((uint32_t *)phdr[idx].p_vaddr),(uint32_t)phdr[idx].p_offset);
      //printf("01x%x,size =%d\n",(uint32_t)phdr[idx].p_vaddr,(uint32_t)phdr[idx].p_filesz);
	  // 虚拟内存大小，与物理实际占用大小是不同的，原因，一些数据初始化为了，在物理上不需要考虑占用
      memset((uint8_t *)(phdr[idx].p_vaddr + phdr[idx].p_filesz),0,phdr[idx].p_memsz - phdr[idx].p_filesz);
    }
  }
  printf(" loader ok \n");
  //printf(" jump 0x%x\n",(uint32_t)elf_head.e_entry);
  // 虚拟地址的入口,加载程序的入口
  return elf_head.e_entry;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", (void *)entry);
  //程序入口地址是一个函数，转化为函数的形式进行调用(void(*)())entry，可以参考difftest
  ((void(*)())entry) ();
}

