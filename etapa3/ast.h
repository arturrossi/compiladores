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
#define AST_EXPRL 12
#define AST_ATTRINTE 13
#define AST_ATTRCARA 14
#define AST_ATTRREAL 15
#define AST_LATTR 16
#define AST_FUNC_PARAM 17
#define AST_ATTR_VECTOR 18
#define AST_LVAL 19
#define AST_LE 20
#define AST_GE 21
#define AST_EQ 22
#define AST_DIF 23
#define AST_AND 24
#define AST_OR 25
#define AST_NOT 26
#define AST_VECTOR_IND 27
#define AST_FUNC_CALL 28
#define AST_SE 29
#define AST_ENTAUM 30
#define AST_ENQUANTO 31
#define AST_SENAUM 32
#define AST_BLOCO 33
#define AST_FUNC_PARAML 34
#define AST_DECL_INT 35
#define AST_DECL_CARA 36
#define AST_DECL_REAL 37

typedef struct astnode
{
    int type;
    HASH_NODE *symbol;
    struct astnode *son[MAX_SONS];
} AST;

AST *astCreate(int type, HASH_NODE *symbol, AST* s0, AST* s1, AST* s2, AST* s3);
void astPrint(AST *node, int level);
void astDecompile(AST *node, FILE* file);

#endif