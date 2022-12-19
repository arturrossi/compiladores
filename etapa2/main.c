int main(int argc, char** argv) {
    if (argc < 2) {
        fprintf(stderr, "Usage: ./executable filename\n");
        exit(1);
    }

    yyin = fopen(argv[1], "r");

    int token;

    initMe();

    yyparse();

    printf("Finished executing main!\n");
    printf("File has %d lines\n", getLineNumber());
    printHashTable();
}