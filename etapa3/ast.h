#ifndef AST_HEADER
#define AST_HEADER

#include "hash.h"

#define MAX_SONS 4

#define AST_SYMBOL 1
#define AST_ADD 2
#define AST_SUB 3
#define AST_MULT 4
#define AST_DIV 5
#define AST_GREAT 6
#define AST_LESS 7
#define AST_LCMD 8
#define AST_ATTR 9
#define AST_ESCREVA 10
#define AST_RETORNE 11

typedef struct astnode
{
    int type;
    HASH_NODE *symbol;
    struct astnode *son[MAX_SONS];

} AST;

AST *astCreate(int type, HASH_NODE *symbol, AST* s0, AST* s1, AST* s2, AST* s3);
void astPrint(AST *node, int level);


#endif