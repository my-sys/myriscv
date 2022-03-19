#include <common.h>
//#include <stdio.h>
#include "./monitor/sdb/sdb.h"
#include <regex.h>
void init_monitor(int, char *[]);
void am_init_monitor();
void engine_start();
int is_exit_status_bad();

int main(int argc, char *argv[]) {
  /* Initialize the monitor. */
#ifdef CONFIG_TARGET_AM
//  am_init_monitor();
#else
//  init_monitor(argc, argv);
#endif

  /* Start engine. */
//  engine_start();

//  return is_exit_status_bad();
 //
 char c[1000] = {};
 FILE *fptr;
 if((fptr = fopen("./tools/gen-expr/input","r"))==NULL){
     printf("Error! can not open the file");
     return -1;
 }
 
     while(fscanf(fptr,"%[^\n]", c)!=EOF){
     fgetc(fptr);
     char *str_num = strtok(c," ");
     word_t num = strtoul(str_num,NULL,10);
     char *expr_str = c + strlen(str_num) + 1;
     bool success = true;
     word_t temp_num = expr(expr_str, &success);
     if(success){
        printf("input expr %s\n",c);
        if(num == temp_num){printf("%lu, %lu, true\n",num,temp_num);}
        else{printf("%lu, %lu, false",num,temp_num);} 
        printf("--------------------------------------------------------\n");
     }else{
        printf("input expr %s\n",c);
        printf("Can not evaluate!!!!\n");
        printf("--------------------------------------------------------\n");
     }
     memset(c,'\0',sizeof(c));
 }
 if(fptr!=NULL){fclose(fptr);}
 return 0;
}
