#ifndef __DEBUG_H__
#define __DEBUG_H__

#include "common.h"
// --------------- state --------------------
enum { NPC_RUNNING, NPC_STOP, NPC_END, NPC_ABORT, NPC_QUIT};
typedef struct{
	int 		state;
	vaddr_t		halt_pc;
	uint32_t 	halt_ret;
} NPCState;

typedef struct{
	word_t gpr[32];
	vaddr_t pc;
	vaddr_t pre_pc; // no use take up space for the order 
	word_t	csr[32];
	word_t inst;
} CPU_state;

extern NPCState npc_state;
extern CPU_state cpu;
// ----------- log -----------

#define ASNI_FG_BLACK   "\33[1;30m"
#define ASNI_FG_RED     "\33[1;31m"
#define ASNI_FG_GREEN   "\33[1;32m"
#define ASNI_FG_YELLOW  "\33[1;33m"
#define ASNI_FG_BLUE    "\33[1;34m"
#define ASNI_FG_MAGENTA "\33[1;35m"
#define ASNI_FG_CYAN    "\33[1;36m"
#define ASNI_FG_WHITE   "\33[1;37m"
#define ASNI_BG_BLACK   "\33[1;40m"
#define ASNI_BG_RED     "\33[1;41m"
#define ASNI_BG_GREEN   "\33[1;42m"
#define ASNI_BG_YELLOW  "\33[1;43m"
#define ASNI_BG_BLUE    "\33[1;44m"
#define ASNI_BG_MAGENTA "\33[1;35m"
#define ASNI_BG_CYAN    "\33[1;46m"
#define ASNI_BG_WHITE   "\33[1;47m"
#define ASNI_NONE       "\33[0m"

#define ASNI_FMT(str, fmt) fmt str ASNI_NONE

#define _Log(...) \
  do { \
    printf(__VA_ARGS__); \
  } while (0)


#define Log(format, ...) \
    _Log(ASNI_FMT("[%s:%d %s] " format, ASNI_FG_BLUE) "\n", \
        __FILE__, __LINE__, __func__, ## __VA_ARGS__)

#endif
