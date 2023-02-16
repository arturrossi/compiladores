#include <stdio.h>
#include "hash.h"

extern FILE *yyin;
extern FILE *yyout;
int yyparse();
void initMe();
int getLineNumber();

int main(int argc, char** argv) {
    if (argc < 3) {
        fprintf(stderr, "Usage: ./executable filename output\n");
        exit(1);
    }

    yyin = fopen(argv[1], "r");

    yyout = fopen(argv[2], "w");

    int token;

    initMe();

    yyparse();

    printf("Finished executing main!\n");
    printf("File has %d lines\n", getLineNumber());
    printHashTable();
}