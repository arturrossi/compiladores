int main(int argc, char** argv) {
    if (argc < 2) {
        fprintf(stderr, "Usage: ./executable filename\n");
        exit(1);
    }

    yyin = fopen(argv[1], "r");

    int token;

    initHashTable();

    while (running) {
        token = yylex();

        if (running == 0) break;

        switch (token) {
            case KW_INTE:
                printf("Found KW_INTE\n");
                break;
            case KW_CARA:
                printf("Found KW_CARA\n");
                break;
            case KW_ENQUANTO:
                printf("Found KW_ENQUANTO\n");
                break;
            case KW_ENTAUM:
                printf("Found KW_ENTAUM\n");
                break;
            case KW_ENTRADA:
                printf("Found KW_ENTRADA\n");
                break;
            case KW_ESCREVA:
                printf("Found KW_ESCREVA\n");
                break;
            case KW_REAL:
                printf("Found KW_REAL\n");
                break;
            case KW_RETORNE:
                printf("Found KW_RETORNE\n");
                break;
            case KW_SE:
                printf("Found KW_SE\n");
                break;
            case KW_SENAUM:
                printf("Found KW_SENAUM\n");
                break;
            case LIT_INTEIRO:
                printf("Found LIT_INTEIRO\n");
                break;
            case OPERATOR_LE:
                printf("Found OPERATOR_LE\n");
                break;
            case OPERATOR_GE:
                printf("Found OPERATOR_GE\n");
                break;
            case OPERATOR_EQ:
                printf("Found OPERATOR_EQ\n");
                break;
            case OPERATOR_DIF:
                printf("Found OPERATOR_DIF\n");
                break;
            case LIT_CHAR:
                printf("Found LIT_CHAR\n");
                break;
            case LIT_STRING:
                printf("Found LIT_STRING\n");
                break;
            case LIT_FLOAT:
                printf("Found LIT_FLOAT\n");
                break;
            case TOKEN_ERROR:
                printf("Unexpected token\n");
                break;
            default:
                printf("Found special char %c\n", token);
                break;
        }
    }

    printf("Finished executing main!\n");
    printf("File has %d lines\n", lineNumber);
    printHashTable();
}

int yywrap() {
    running = 0;
    return 1;
}