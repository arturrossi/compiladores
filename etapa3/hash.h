#ifndef HASH_HEADER
#define HASH_HEADER

#include "string.h"
#include "stdlib.h"
#include "stdio.h"

#define HASH_SIZE 997

typedef struct hashNode {
    int type;
    char* text;
    struct hashNode* next;
} HASH_NODE;

void initHashTable(void);
int getHashAddress(char* text);
HASH_NODE* findNode(char* text);
HASH_NODE* insertNode(char* text, int type);
void printHashTable(void);

#endif