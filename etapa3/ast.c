#include "ast.h"
#include "stdlib.h"
#include <stdio.h>

AST *astCreate(int type, HASH_NODE *symbol, AST* s0, AST* s1, AST* s2, AST* s3) {
	AST* newnode;

	newnode = (AST*) calloc(1, sizeof(AST));

	newnode->type = type;
	newnode->symbol = symbol;
	newnode->son[0] = s0;
	newnode->son[1] = s1;
	newnode->son[2] = s2;
	newnode->son[3] = s3;

	return newnode;
}

void astPrint(AST* node, int level) {
   if(!node) return;

   int i;

   for (i = 0; i < level; i++) {
	   fprintf(stderr, "  ");
   }

   fprintf(stderr, "AST(");

   switch(node->type) {
    case AST_SYMBOL:
		fprintf(stderr, "AST_SYMBOL");
		break;
	case AST_ADD:
		fprintf(stderr, "AST_ADD");
		break;
	case AST_SUB:
		fprintf(stderr, "AST_SUB");
		break;
	case AST_MULT:
		fprintf(stderr, "AST_MULT");
		break;
	case AST_DIV:
		fprintf(stderr, "AST_DIV");
		break;
	case AST_LESS:
		fprintf(stderr, "AST_LESS");
		break;
	case AST_GREAT:
		fprintf(stderr, "AST_GREAT");
		break;
	case AST_LATTR:
		fprintf(stderr, "AST_LATTR");
		break;
	case AST_ATTRINTE:
		fprintf(stderr, "AST_ATTRINTE");
		break;
	case AST_ATTRREAL:
		fprintf(stderr, "AST_ATTRREAL");
		break;
	case AST_ATTRCARA:
		fprintf(stderr, "AST_ATTRCARA");
		break;
	case AST_ATTR:
		fprintf(stderr, "AST_ATTR");
		break;
	case AST_FUNC_PARAM: 
		fprintf(stderr, "AST_FUNC_PARAM");
		break;
	case AST_ATTR_VECTOR:
		fprintf(stderr, "AST_ATTR_VECTOR");
		break;
	case AST_LVAL:
		fprintf(stderr, "AST_LVAL");
		break;
	case AST_LE:
		fprintf(stderr, "AST_LE");
		break;
	case AST_GE:
		fprintf(stderr, "AST_GE");
		break;
	case AST_EQ:
		fprintf(stderr, "AST_EQ");
		break;
	case AST_DIF:
		fprintf(stderr, "AST_DIF");
		break;
	case AST_AND:
		fprintf(stderr, "AST_AND");
		break;
	case AST_OR:
		fprintf(stderr, "AST_OR");
		break;
	case AST_NOT:
		fprintf(stderr, "AST_NOT");
		break;
	case AST_LCMD:
		fprintf(stderr, "AST_LCMD");
		break;
	case AST_VECTOR_IND:
		fprintf(stderr, "AST_VECTOR_IND");
		break;
	case AST_FUNC_CALL:
		fprintf(stderr, "AST_FUNC_CALL");
		break;
	case AST_EXPRL:
		fprintf(stderr, "AST_EXPRL");
		break;
	case AST_SE:
		fprintf(stderr, "AST_SE");
		break;
	case AST_ENTAUM:
		fprintf(stderr, "AST_ENTAUM");
		break;
	case AST_ENQUANTO:
		fprintf(stderr, "AST_ENQUANTO");
		break;
	case AST_SENAUM:
		fprintf(stderr, "AST_SENAUM");
		break;
	case AST_RETORNE:
		fprintf(stderr, "AST_RETORNE");
		break;
	default:
		fprintf(stderr, "AST_UNKNOWN");
		break;
   }

   if (node->symbol !=0) fprintf(stderr, ", %s\n", node->symbol->text);
   else fprintf(stderr, ", 0\n");

	for(i=0; i < MAX_SONS; i++) {
		astPrint(node->son[i], level+1);
	}
}
