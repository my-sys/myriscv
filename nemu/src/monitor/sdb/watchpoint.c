#include "sdb.h"

#define NR_WP 32

typedef struct watchpoint {
  int NO;
  struct watchpoint *next;

  /* TODO: Add more members if necessary */
  char expr_str[500];
} WP;

static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;
  free_ = wp_pool;
}

WP* new_wp(){
    if(free_ == NULL){
        printf("watchpoints reach the maximum number\n");
        return NULL;
    }
    WP* temp = free_;
    free_ = free_->next;
    temp->next = NULL;
    return temp;    
}

void free_wp(WP *wp){
    if(wp == NULL){
        printf("NULL can not be free!!!\n");
    }
    if(head == wp){
        head= head->next;
    }else{
        WP* temp = head;
        while(temp->next!= NULL && temp->next != wp){
            temp = temp->next;
        }
        if(temp->next == NULL){
            printf("you have an error input, check it!!!\n");
        }
        temp->next = wp->next;
    }
    wp->next = NULL;
    memset(wp->expr_str,'\0',sizeof(wp->expr_str));
    wp->next = free_;
    free_ = wp;
}

void create_watchpoint(char *str){
    WP *new_temp = new_wp();
    if(new_temp == NULL){
        printf("set watchpoint failed !!\n");
        return;
    }else{
        strcpy(new_temp->expr_str,str);
    }
    if(head == NULL){
        head = new_temp;
    }else{
        WP * temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = new_temp;
    }
    printf("Successful!! Watchpoint %d: %s \n",new_temp->NO,new_temp->expr_str);
    return;
}

void delete_watchpoint(int No){
    WP * temp = head;
    while(temp != NULL){
        if(temp->NO == No)break;
        else{
            temp = temp->next;
        }
    }
    if(temp == NULL){
        printf("No %d is not in watchpints now!!\n",No);
    }else{
        free_wp(temp);
        printf("Watchpoint No %d is deleted successfully !!!\n",No);
    }
}

void display_watchpoint(){
    printf("Num  Type     Disp  Enb  What \n");
    WP *temp = head;
    while(temp != NULL){
        printf("%d  watchpoint  keep y  %s\n",temp->NO,temp->expr_str);
    }
}
/* TODO: Implement the functionality of watchpoint */

