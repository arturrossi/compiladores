#include "hash.h"

HASH_NODE* hashTable[HASH_SIZE];

void initHashTable() {
    int i;

    for (i = 0; i < HASH_SIZE; i++) {
        hashTable[i] = 0;
    }
}

int getHashAddress(char* text) {
    int address = 1;
    int i;

    for (i = 0; i < strlen(text); i++) {
        address = (address * text[i]) % HASH_SIZE + 1;
    }

    return address - 1;
}

HASH_NODE* findNode(char* text) {
    HASH_NODE* node;
    int address = getHashAddress(text);

    for (node = hashTable[address]; node; node->next) {
        if (strcmp(node->text, text) == 0) {
            return node;
        }
    }

    return 0;
}

HASH_NODE* insertNode(char* text, int type) {
    HASH_NODE* node = findNode(text);

    if (node != 0) return node;

    int address = getHashAddress(text);

    node = (HASH_NODE*)calloc(1, sizeof(HASH_NODE));
    node->type = type;
    node->text = (char*)calloc(strlen(text) + 1, sizeof(char));
    strcpy(node->text, text);
    node->next = hashTable[address];
    hashTable[address] = node;

    return node;
}

void printHashTable() {
    int i;
    HASH_NODE* node;

    for (i = 0; i < HASH_SIZE; i++) {
        for (node = hashTable[i]; node; node = node->next) {
            printf("Hash table [%d] has %s\n", i, node->text);
        }
    }
}