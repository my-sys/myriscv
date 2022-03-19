#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>

// this should be enough
static char buf[65536] = {};
static char code_buf[65536 + 128] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  unsigned result = %s; "
"  printf(\"%%u\", result); "
"  return 0; "
"}";

int choose(int n){
     return rand()%n;
}

void gen_num(){
    char str[32] ={'\0'};
   // itoa(rand(),str,10);
    for(int i=0; i< rand()%10;i++){
        strcat(buf," ");
    }
    sprintf(str, "%u", rand()%1000);
    strcat(buf,str);
}

void gen(char temp){
    char str[2] ={'\0'};
    str[0] = temp;
    strcat(buf,str);
}

void gen_rand_op(){
    switch(choose(4)){
        case 0: gen('-');break;
        case 1: gen('+');break;
        case 2: gen('*');break;
        case 3: gen('/');break;
        default: ;
    }
}
static int gen_count =0;

static void gen_rand_expr() {
    if(gen_count >=3){
        gen_count = 0;
        gen_num();
        return;
    }else{
        gen_count ++;
    }
    switch (choose(3)){
        case 0: gen_num(); break;
        case 1: gen('('); gen_rand_expr(); gen(')'); break;
        default: gen_rand_expr(); gen_rand_op();gen_rand_expr(); break;
    }
    //printf("now %s \n",buf);
}

int main(int argc, char *argv[]) {
  int seed = time(0);
  srand(seed);
  int loop = 1;
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);
  }
  int i;
  for (i = 0; i < loop; i ++) {
    memset(buf,'\0',sizeof(buf));
    gen_rand_expr();

    sprintf(code_buf, code_format, buf);

    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);

    int ret = system("gcc /tmp/.code.c -o /tmp/.expr");
    if (ret != 0) continue;

    fp = popen("/tmp/.expr", "r");
    assert(fp != NULL);

    int result;
    int temp = fscanf(fp, "%d", &result);
    temp ++;
    pclose(fp);

    printf("%u %s\n", result, buf);
  }
  return 0;
}
