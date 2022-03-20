#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
/*
 * change the POSIX regex to PCRE
 */
#include <sys/types.h>
//#include <regex.h>
#include <pcre.h>
#include <memory/paddr.h>
enum {
  TK_NOTYPE = 256, TK_EQ,
  TK_NUM,TK_HEX_NUM,TK_REG,
  TK_DEREF,TK_NEQ,TK_AND,
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
  {"!=", TK_NEQ},
  {"&&", TK_AND},
  {"0x[0-9]+",TK_HEX_NUM},
  {"[a-z]?(?:[0-9]|[1-9][0-9])$",TK_REG},
};

#define NR_REGEX ARRLEN(rules)

static pcre* re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  const char* error_msg;
  int erroffset;
  
  for (i = 0; i < NR_REGEX; i ++) {
    re[i] = pcre_compile(rules[i].regex,0,&error_msg,&erroffset,NULL);
      // ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);//REG_EXTENDED
    if (re[i] == NULL) {
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[1000] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  nr_token = 0;
  int ovector[3];
  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (pcre_exec(re[i],NULL, e + position, strlen(e+position),0,0,ovector,3) > 0 && ovector[0] == 0) {
        char *substr_start = e + position;
        int substr_len = ovector[1]-ovector[0];

       // Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
         //   i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */
        
        switch (rules[i].token_type) {
          case '+':strncpy(tokens[nr_token].str,substr_start,31);tokens[nr_token].str[31]='\0';tokens[nr_token].type = '+';nr_token++;break;
          case '-':strncpy(tokens[nr_token].str,substr_start,31);tokens[nr_token].str[31]='\0';tokens[nr_token].type = '-';nr_token++;break;
          case '*':strncpy(tokens[nr_token].str,substr_start,31);tokens[nr_token].str[31]='\0';tokens[nr_token].type = '*';nr_token++;break;
          case '/':strncpy(tokens[nr_token].str,substr_start,31);tokens[nr_token].str[31]='\0';tokens[nr_token].type = '/';nr_token++;break;
          case '(':strncpy(tokens[nr_token].str,substr_start,31);tokens[nr_token].str[31]='\0';tokens[nr_token].type = '(';nr_token++;break;
          case ')':strncpy(tokens[nr_token].str,substr_start,31);tokens[nr_token].str[31]='\0';tokens[nr_token].type = ')';nr_token++;break;
          case TK_NUM:strncpy(tokens[nr_token].str,substr_start,31);tokens[nr_token].str[31]='\0';tokens[nr_token].type = TK_NUM;nr_token++;break;
          case TK_NOTYPE:break;
          case TK_EQ:strncpy(tokens[nr_token].str,substr_start,31);tokens[nr_token].str[31]='\0';tokens[nr_token].type = TK_EQ;nr_token++;break;
          case TK_NEQ:strncpy(tokens[nr_token].str,substr_start,31);tokens[nr_token].str[31]='\0';tokens[nr_token].type = TK_NEQ;nr_token++;break;
          case TK_AND:strncpy(tokens[nr_token].str,substr_start,31);tokens[nr_token].str[31]='\0';tokens[nr_token].type = TK_AND;nr_token++;break;
          case TK_HEX_NUM:strncpy(tokens[nr_token].str,substr_start,31);tokens[nr_token].str[31]='\0';tokens[nr_token].type = TK_HEX_NUM;nr_token++;break;
          case TK_REG:strncpy(tokens[nr_token].str,substr_start,31);tokens[nr_token].str[31]='\0';tokens[nr_token].type = TK_REG;nr_token++;break; 

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
        if(count == 0 && p!=q){return false;}
        p++;
    }
    if(count == 0){return true;}
    else return false;
}

uint32_t find_poistion_main_operator(uint32_t p , uint32_t q){
    int main_operator_type = 0;
    int count = 0;
    uint32_t position = 0;
    while(p < q){ //the effectiveness of this method is very , it must exist better method.
        if(tokens[p].type == TK_AND){
            if(count == 0 ){
                main_operator_type = tokens[p].type;
                position = p;
            }   
        }else if(tokens[p].type == TK_EQ || tokens[p].type == TK_NEQ){
            if(count == 0){
                if(main_operator_type != TK_AND){
                    main_operator_type = tokens[p].type;
                    position = p;
                }
            }
        }else if(tokens[p].type == '+' || tokens[p].type == '-'){
            if(count == 0 ){
                if(main_operator_type != TK_AND && main_operator_type != TK_EQ && main_operator_type != TK_NEQ){

                    main_operator_type = tokens[p].type;
                    position = p;
                }
            }
        }else if(tokens[p].type == '*' || tokens[p].type == '/'){
            if(count == 0 && main_operator_type != TK_AND && main_operator_type != TK_EQ && main_operator_type != TK_NEQ  && main_operator_type != '-'&& main_operator_type != '+'){
                main_operator_type = tokens[p].type;
                position = p;
            }
        }else if(tokens[p].type == TK_DEREF){
            if(count == 0 && main_operator_type != '*' && main_operator_type != '/' && main_operator_type != TK_AND && main_operator_type != TK_EQ && main_operator_type != TK_NEQ  && main_operator_type != '-'&& main_operator_type != '+'){
                main_operator_type = tokens[p].type;
                position = p;
            }
        }
        else if(tokens[p].type == '('){
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
        if(tokens[p].type == TK_NUM){
            return atol(tokens[p].str);
        }else if(tokens[p].type == TK_HEX_NUM){
            return strtoul(tokens[p].str, NULL, 16); 
        }else if(tokens[p].type == TK_REG){
            bool success = false;
            word_t temp =  isa_reg_str2val(tokens[p].str,&success);
            if(success == false){
                assert(0);
                return 0;
            }else{
                return temp;
            }
        }
        else{
            assert(0);
            return 0;
        }
        
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
            case TK_EQ: return (val1 == val2)? 1:0;
            case TK_NEQ: return (val1 != val2)? 1:0;
            case TK_AND: return (val1 && val2);
            case TK_DEREF: return paddr_read(val2, 4);
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
  for(int i = 0; i < nr_token; i++){
      if(tokens[i].type == '*' && (i == 0 || (tokens[i-1].type != TK_NUM && tokens[i-1].type != TK_HEX_NUM && tokens[i-1].type != ')'))){
          tokens[i].type = TK_DEREF;
      }
  }
  return eval(0,nr_token - 1);
  //return 0;
}
