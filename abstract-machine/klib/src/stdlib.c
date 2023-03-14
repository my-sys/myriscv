#include <am.h>
#include <klib.h>
#include <klib-macros.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

static unsigned long int rand_data = 1;
int rand(void){
	rand_data = rand_data*12345 +7498;

	return (unsigned int)(rand_data)%32768;
}

void srand(unsigned int seed) {
  rand_data = seed;
}

int abs(int x){
	return (x < 0 ? -x : x);
}

int atoi(const char* nptr){
	int num = 0;
	while(*nptr == ' '){nptr ++;}
	//'0'=48  // 指令只有大于等于，和小于,速度更快
	while((*nptr >= 48) &(*nptr < 58)){
		//左移比乘法快，即使是多了移位，和加法
		num = (num<<3) + (num<<1) +(*nptr-48);
		nptr ++;
	}
	return num;
}
extern Area heap;
static uintptr_t program_break = (uintptr_t)&heap.start;
//获取指针所指向的对应地址
int brk(void *addr){
	printf("addr 0x%x,%x start 0x%x,%x end 0x%x,%x\n",(uintptr_t)addr>>32,(uintptr_t)addr,(uintptr_t)program_break>>32,(uintptr_t)program_break,(uintptr_t)heap.end>>32,(uintptr_t)heap.end);
	if((uintptr_t)addr >= program_break && (uintptr_t)addr < (uintptr_t)heap.end){
		program_break = (uintptr_t)addr;
		return 0;
	}
	return -1;
}

void *sbrk(intptr_t increment){
	uintptr_t temp = program_break;
	int ret = brk((void *)(program_break+increment));
	assert(ret == 0);
	if(ret == 0){
		return (void*)temp;
	}else{
		return (void*)-1;
	}
	
}
static void *base = NULL;
#define BLOCK_SIZE 24 //8*3 =24, size, next, free
typedef struct s_block{
	size_t			size; ////uint64_t size
	struct s_block	*next;
	uint64_t		free; // 目的8字节对齐，因为64位系统是8字节
	uint8_t			*data; //这个是用于指明数据的开始位置，//占位符
}xingk_block;

//从头开始找，last返回的是不满足条件最后一个block，return 返回的是满足条件的block
//找不到last返回最后不满足，return 返回NULL
xingk_block *find_block(xingk_block *last,size_t s){
	xingk_block *temp = last;
	while(temp &&(!((temp->free) && (temp->size >= s)))){
		last = temp;
		temp = temp->next;
	}
	return temp;
}

//将当前块划分为两块，前一块大小为s,s要求是8字节对齐，划分完后b指针不变
void split_block(xingk_block *b, size_t s){
	xingk_block *new;
	new = (xingk_block *)(b->data - s);
	new->size = b->size - s - BLOCK_SIZE;
	new->free = 1;
	new->next = b->next;
	//new->data = b->data - s - BLOCK_SIZE;
	b->size = s;
	b->next = new;
}

//last 是最后一块block，下增加的block要接到其后面，增加失败返回NULL。
//增加成功返回block
xingk_block *extend_heap(xingk_block *last, size_t s){
	xingk_block *new = NULL;
	new = (xingk_block*)sbrk(s+BLOCK_SIZE);
	new->size = s;
	new->next = NULL;
	new->free = 0;
	//new->data = (void*)new + BLOCK_SIZE;
	if(last){
		last->next = new;
	}
	return new;
}

void *malloc(size_t size){
	size = (size_t)ROUNDUP(size,8);
	xingk_block *new = NULL;
	xingk_block *last = base;
	if(base){
		new = find_block(last,size);
		if(new){
			if(new->size >=(size+BLOCK_SIZE+8)){
				split_block(new,size);
			}
			new->free = 0;
		}else{
			new = extend_heap(NULL,size);
		}
	}else{
		new = extend_heap(NULL,size);
		base = new;
	}
	if(new == NULL)return NULL;
	return new->data;
}

void free(void *ptr){
	
}
#endif
