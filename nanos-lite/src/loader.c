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
  //TODO();
  //FILE *fp= fopen(filename,"r");
  // FILE *fp= fopen("ramdisk.img","r");
  // Elf64_Ehdr elf_head;
  // int len;
  // len = fread(&elf_head, sizeof(Elf64_Ehdr), 1, fp);
  // if(len <0){printf("error\n");}
  // // 程序表
  // Elf64_Phdr *phdr = (Elf64_Phdr*)malloc(sizeof(Elf64_Phdr)*elf_head.e_phnum);
  // len = fseek(fp, elf_head.e_phoff, SEEK_SET);
  // if(len <0){printf("error\n");}
  // len = fread(phdr, sizeof(phdr)*elf_head.e_phnum, 1, fp);  
  // int idx;
  // for(idx = 0; idx < elf_head.e_phnum; idx++){
  //   if(phdr[idx].p_type == PT_LOAD){
  //     ramdisk_read((uint8_t *)phdr[idx].p_vaddr,phdr[idx].p_offset,phdr[idx].p_filesz);
  //     memset((uint8_t *)(phdr[idx].p_vaddr + phdr[idx].p_filesz),0,phdr[idx].p_memsz - phdr[idx].p_filesz);
  //   }
  // }

  /****************** success *************************/
  // Elf64_Ehdr elf_head;
  // ramdisk_read(&elf_head,0,sizeof(Elf64_Ehdr));  
  // assert(*(uint32_t *)elf_head.e_ident == 0x464c457f);
  // //printf("magic 0x%x\n",*(uint32_t *)elf_head.e_ident);
  // Elf64_Phdr *phdr = (Elf64_Phdr*)malloc(sizeof(Elf64_Phdr)*elf_head.e_phnum);
  // ramdisk_read(phdr,elf_head.e_phoff,sizeof(Elf64_Phdr)*elf_head.e_phnum);
  // int idx;
  // for(idx = 0; idx < elf_head.e_phnum; idx++){
  //   if(phdr[idx].p_type == PT_LOAD){
  //     ramdisk_read((uint8_t *)phdr[idx].p_vaddr,phdr[idx].p_offset,phdr[idx].p_filesz);
  //     memset((uint8_t *)(phdr[idx].p_vaddr + phdr[idx].p_filesz),0,phdr[idx].p_memsz - phdr[idx].p_filesz);
  //   }
  // }  
  // return elf_head.e_entry;

  int len;
  int fd = fs_open(filename,0,0);
  Elf64_Ehdr elf_head;
  fs_read(fd,&elf_head,sizeof(Elf64_Ehdr));
  Elf64_Phdr *phdr = (Elf64_Phdr*)malloc(sizeof(Elf64_Phdr)*elf_head.e_phnum);
  len = fs_lseek(fd, elf_head.e_phoff, SEEK_SET);
  if(len <0){printf("error\n");}
  len = fs_read(fd,phdr,sizeof(phdr)*elf_head.e_phnum);
  int idx;
  for(idx = 0; idx < elf_head.e_phnum; idx++){
    if(phdr[idx].p_type == PT_LOAD){
      fs_lseek(fd, phdr[idx].p_offset, SEEK_SET);
      fs_read(fd,(uint8_t *)phdr[idx].p_vaddr,phdr[idx].p_filesz);
      memset((uint8_t *)(phdr[idx].p_vaddr + phdr[idx].p_filesz),0,phdr[idx].p_memsz - phdr[idx].p_filesz);
    }
  }
  return elf_head.e_entry;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", (void *)entry);
  ((void(*)())entry) ();
}

