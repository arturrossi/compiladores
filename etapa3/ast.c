#include "ast.h"

void astPrint(AST* node) {
   if(!node) return;

   int i;

   fprintf(stderr, "AST(");

   switch(node->type) {
        case AST_SYMBOL:
		fprintf(stderr, "AST_SYMBOL, \n");
		break;
	default:
		fprintf(stderr, "AST_UNKNOWN, \n");
		break;
   }

   if (node->symbol !=0) {
   	fprintf(stderr, "%s\n", node->symbol->text);

	for(i=0; i < MAX_SONS; i++) {
		astPrint(node->son[i]);
	}
   }
}
