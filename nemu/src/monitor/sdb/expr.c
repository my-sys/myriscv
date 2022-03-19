#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <sys/types.h>
#include <regex.h>

enum {
  TK_NOTYPE = 256, TK_EQ,
  TK_NUM,
  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */
  {"\\*",'*'},
  {"\\/",'/'},
  {"\\-",'-'},
  {"\\)",')'},
  {"\\(",'('},
  {"[0-9]+",TK_NUM},
  {" +", TK_NOTYPE},    // spaces
 // {"\\\+", '+'},         // plus
  {"\\+",'+'}, 
  {"==", TK_EQ},        // equal
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[200] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;
  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

      //  Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
      //      i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */
        
        switch (rules[i].token_type) {
          case '+':strncpy(tokens[nr_token].str,substr_start,substr_len);tokens[nr_token].type = '+';nr_token++;break;
          case '-':strncpy(tokens[nr_token].str,substr_start,substr_len);tokens[nr_token].type = '-';nr_token++;break;
          case '*':strncpy(tokens[nr_token].str,substr_start,substr_len);tokens[nr_token].type = '*';nr_token++;break;
          case '/':strncpy(tokens[nr_token].str,substr_start,substr_len);tokens[nr_token].type = '/';nr_token++;break;
          case '(':strncpy(tokens[nr_token].str,substr_start,substr_len);tokens[nr_token].type = '(';nr_token++;break;
          case ')':strncpy(tokens[nr_token].str,substr_start,substr_len);tokens[nr_token].type = ')';nr_token++;break;
          case TK_NUM:strncpy(tokens[nr_token].str,substr_start,substr_len);tokens[nr_token].type = TK_NUM;nr_token++;break;
          case TK_NOTYPE:break;
          case TK_EQ:strncpy(tokens[nr_token].str,substr_start,substr_len);tokens[nr_token].type = TK_EQ;nr_token++;break;
          default: assert(0);
        }
        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  return true;
}

bool check_parentheses(uint32_t p, uint32_t q){
    int count = 0;
    if(tokens[p].type !='('|| tokens[q].type != ')'){return false;}
    while(p <= q){
        if(tokens[p].type == '(')count++;
        else if(tokens[p].type ==')')count--;
        else {};
        if(count <0)return false;
        p++;
    }
    if(count == 0){return true;}
    else return false;
}

uint32_t find_poistion_main_operator(uint32_t p , uint32_t q){
    int main_operator_type = 0;
    int count = 0;
    uint32_t position = 0;
    while(p < q){
        if(tokens[p].type == '+' || tokens[p].type == '-'){
            if(count == 0 ){
                main_operator_type = tokens[p].type;
                position = p;
            }
        }else if(tokens[p].type == '*' || tokens[p].type == '/'){
            if(count == 0 && main_operator_type != '-'&& main_operator_type != '+'){
                main_operator_type = tokens[p].type;
                position = p;
            }
        }else if(tokens[p].type == '('){
            count ++;
        }else if(tokens[p].type == ')'){
            count --;
        }
        p++;
    }
    return position;
}

word_t eval(uint32_t p, uint32_t q){
    if (p > q){
        printf("Bad expression \n");
        return 0;
    }
    else if (p == q){

        return atol(tokens[p].str);
    }
    else if (check_parentheses(p,q) == true){
        return eval(p + 1, q - 1);
    }
    else {
        uint32_t op = find_poistion_main_operator(p,q);
        int op_type = tokens[op].type;
        word_t val1 = eval(p, op - 1);
        word_t val2 = eval(op + 1, q);
        
        switch (op_type) {
            case '+': return val1 + val2;
            case '-': return val1 - val2;
            case '*': return val1 * val2;
            case '/': return val1 / val2;
            default: assert(0);
        }

    }
}

word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }

  /* TODO: Insert codes to evaluate the expression. */
  //TODO();
  return eval(0,nr_token - 1);
  //return 0;
}
