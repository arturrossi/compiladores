
%token KW_CARA          
%token KW_INTE          
%token KW_REAL          

%token KW_SE            
%token KW_ENTAUM        
%token KW_SENAUM        
%token KW_ENQUANTO      
%token KW_ENTRADA       
%token KW_ESCREVA       
%token KW_RETORNE       

%token OPERATOR_LE      
%token OPERATOR_GE      
%token OPERATOR_EQ      
%token OPERATOR_DIF     

%token TK_IDENTIFIER    

%token LIT_INTEIRO      
%token LIT_FLOAT        
%token LIT_CHAR         
%token LIT_STRING       

%token TOKEN_ERROR   

%left '+' '-'
%left '*' '/'
%left '<' '>'
%left '&' '|'
%left OPERATOR_LE OPERATOR_GE
%left OPERATOR_EQ OPERATOR_DIF
%left '~'

%%

programa: decl
    ;
    
decl: dec resto
    |
    ;
    
dec: tipo TK_IDENTIFIER decresto
    ;

resto: dec resto
    |
    ;

decresto: '=' val ';'
    | '(' func_param ')' bloco
    | '[' LIT_INTEIRO ']' ';'
    | '[' LIT_INTEIRO ']' '=' val_lista ';'
    ;

bloco: '{' lcmd '}'
    ;

lcmd: cmd lcmd
    | ';'
    |
    ;

cmd: TK_IDENTIFIER '=' expr ';'
    | TK_IDENTIFIER '[' expr ']' '=' expr ';'
    | KW_ESCREVA expr_escreva ';'
    | KW_RETORNE expr ';'
    | KW_ENTAUM cmd KW_SE '(' expr ')'
    | KW_ENTAUM KW_SENAUM cmd KW_SE '(' expr ')'
    | cmd KW_ENQUANTO '(' expr ')'
    ;

expr_escreva: LIT_INTEIRO expr_escreva
    |
    ;

expr: LIT_INTEIRO  
    | LIT_FLOAT
    | LIT_CHAR
    | TK_IDENTIFIER '[' expr ']'
    | TK_IDENTIFIER
    | TK_IDENTIFIER '(' func_val ')'
    | KW_ENTRADA
    | expr '+' expr
    | expr '-' expr
    | expr '*' expr
    | expr '/' expr
    | expr '<' expr
    | expr '>' expr
    | expr OPERATOR_LE expr
    | expr OPERATOR_GE expr
    | expr OPERATOR_EQ expr
    | expr OPERATOR_DIF expr
    | expr '&' expr
    | expr '|' expr
    | expr '~' expr
    | '(' expr ')'
    ;

func_val: expr func_val
    |
    ;

func_param: tipo TK_IDENTIFIER func_param
    |
    ;

val_lista: val val_lista
    |
    ;

tipo: KW_INTE
    | KW_CARA
    | KW_REAL
    ;

val: LIT_CHAR
    | LIT_FLOAT
    | LIT_INTEIRO
    | LIT_STRING
    ;

%%

int yyerror () {
    fprintf(stderr, "Syntax error on line %d\n", getLineNumber());
    exit(3);
}