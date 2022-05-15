#include "xingk_fun.h"
FILE *ftrace_log_fp = NULL;
FILE *mtrace_log_fp = NULL;
static value_fun_name fun_name[200] = {};
static int fun_count = 0;
void init_ftrace(const char *img_elf){
    FILE *fp= fopen(img_elf,"r");
    if(fp == NULL){
        printf("Can not open the %s \n",img_elf);
        assert(0);
        return;
    }
    Elf64_Ehdr elf_head;
    int len;
    len = fread(&elf_head, sizeof(Elf64_Ehdr), 1, fp);
    if(len <0){printf("error\n");}
    // shdr 节区表
    Elf64_Shdr *shdr = (Elf64_Shdr*)malloc(sizeof(Elf64_Shdr)*elf_head.e_shnum);
    len = fseek(fp, elf_head.e_shoff, SEEK_SET);
    if(len <0){printf("error\n");}
    len = fread(shdr, sizeof(Elf64_Shdr)*elf_head.e_shnum, 1, fp);
    rewind(fp);
    if(len <0){printf("error\n");}
    // 获取节区表名的对应节字符串表
    len = fseek(fp,(shdr + elf_head.e_shstrndx)->sh_offset,SEEK_SET);if(len <0){printf("error\n");}
    char * section_str_table = (char*)malloc(sizeof(char)*(shdr + elf_head.e_shstrndx)->sh_size);
    len = fread(section_str_table,sizeof(char),(shdr + elf_head.e_shstrndx)->sh_size,fp);
    if(len <0){printf("error\n");}
    rewind(fp);
    int idx; int symtab_idx =0, strtab_idx = 0;
    for(idx = 0; idx < elf_head.e_shnum; idx++){
        char* temp = (char*)(shdr[idx].sh_name + section_str_table);
        if(strcmp(".symtab",temp)==0){symtab_idx = idx;}
        if(strcmp(".strtab",temp)==0){strtab_idx = idx;}
    }

    //获取symtab 表
    len = fseek(fp,(shdr + symtab_idx)->sh_offset,SEEK_SET);
    Elf64_Sym *symbol_table = (Elf64_Sym*)malloc(sizeof(char)*(shdr + symtab_idx)->sh_size);
    len = fread(symbol_table,1,(shdr+symtab_idx)->sh_size,fp);
    rewind(fp);
    // 获取字符串表
    len = fseek(fp,(shdr + strtab_idx)->sh_offset,SEEK_SET);
    char *str_table = (char*)malloc(sizeof(char)*(shdr + strtab_idx)->sh_size);
    len = fread(str_table,1,(shdr + strtab_idx)->sh_size,fp);

    int num = (shdr + symtab_idx)->sh_size/(sizeof(Elf64_Sym));

    for(int i = 0; i < num; i++){
        if((symbol_table + i)->st_info == 18){
            fun_name[fun_count].addr_value = (symbol_table + i)->st_value;
            fun_name[fun_count].size = (symbol_table + i)->st_size;
            printf("%s \n",((symbol_table + i)->st_name +str_table) );
            strncpy(fun_name[fun_count].fun_name,(char*)((symbol_table + i)->st_name +str_table),45);
            
            fun_count++;
        }
        if(fun_count > 200){printf("fun number is too large \n");assert(0);break;}
    }
    fclose(fp);

    ftrace_log_fp = fopen("./ftrace_log.txt","w");
    if(ftrace_log_fp == NULL){
        printf("Can not open ftrace_log.txt\n");
        assert(0);
    }
    return;
}

void find_fun_name(uint64_t value, char* str_fun_name){
    for(int i = 0; i< fun_count; i++){
        if(fun_name[i].addr_value <= value && value < (fun_name[i].addr_value + fun_name[i].size)){
            strcpy(str_fun_name,fun_name[i].fun_name);
            return;
        }
    }
    strcpy(str_fun_name,"???");
}

void init_mtrace(){
    mtrace_log_fp = fopen("./mtrace_log.txt","w");
    if(mtrace_log_fp == NULL){
        printf("Can not open mtrace_log.txt\n");
        assert(0);
    }
}
