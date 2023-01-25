%{ 
    #include "hash.h"
    #include "ast.h"

    int yyerror();
    int getLineNumber();
    int yylex();
%}

%union 
{
    HASH_NODE *symbol;
    AST *ast;
} 

%token KW_CARA          
%token KW_INTE          
%token KW_REAL          

%token KW_SE            
%token KW_ENTAUM        
%token KW_SENAUM        
%token KW_ENQUANTO      
%token<symbol> KW_ENTRADA       
%token KW_ESCREVA       
%token KW_RETORNE       

%token OPERATOR_LE      
%token OPERATOR_GE      
%token OPERATOR_EQ      
%token OPERATOR_DIF     

%type<ast> expr;
%type<ast> lcmd;
%type<ast> cmd;
%type<ast> expr_escreva;

%token<symbol> TK_IDENTIFIER    

%token<symbol> LIT_INTEIRO      
%token<symbol> LIT_FLOAT        
%token<symbol> LIT_CHAR         
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

decresto: '=' expr ';'                          { astPrint($2, 0); }
    | '(' func_param ')' bloco
    | '[' LIT_INTEIRO ']' ';'
    | '[' LIT_INTEIRO ']' '=' val_lista ';'
    ;

bloco: '{' lcmd '}'
    ;

lcmd: cmd lcmd                                 { $$ = astCreate(AST_LCMD, 0, $1, 0, 0, 0); }
    | ';'                                 
    |                                          { $$ = $0; }
    ;

cmd: TK_IDENTIFIER '=' expr ';'                 { $$ = astCreate(AST_ATTR, $1, $3, 0, 0, 0); }
    | TK_IDENTIFIER '[' expr ']' '=' expr ';'   { $$ = astCreate(AST_ATTR, $3, $6, 0, 0, 0); }
    | KW_ESCREVA expr_escreva ';'               { $$ = astCreate(AST_ESCREVA, $2, 0, 0, 0, 0); }
    | KW_RETORNE expr ';'                       { $$ = astCreate(AST_RETORNE, $2, 0, 0, 0, 0); }
    | KW_ENTAUM cmd KW_SE '(' expr ')'          
    | KW_ENTAUM KW_SENAUM cmd KW_SE '(' expr ')'
    | cmd KW_ENQUANTO '(' expr ')'
    ;

expr_escreva: LIT_INTEIRO expr_escreva         { $$ = astCreate(AST_SYMBOL, $1, 0, 0, 0, 0); }
    |                                          { $$ = $0; }
    ;

expr: LIT_INTEIRO                               { $$ = astCreate(AST_SYMBOL, $1, 0, 0, 0, 0); }
    | LIT_FLOAT                                 { $$ = astCreate(AST_SYMBOL, $1, 0, 0, 0, 0); } 
    | LIT_CHAR                                  { $$ = astCreate(AST_SYMBOL, $1, 0, 0, 0, 0); } 
    | TK_IDENTIFIER '[' expr ']'                { $$ = astCreate(AST_SYMBOL, $1, 0, 0, 0, 0); } 
    | TK_IDENTIFIER                             { $$ = astCreate(AST_SYMBOL, $1, 0, 0, 0, 0); }
    | TK_IDENTIFIER '(' func_val ')'            { $$ = astCreate(AST_SYMBOL, $1, 0, 0, 0, 0); } 
    | KW_ENTRADA                                 { $$ = astCreate(AST_SYMBOL, $1, 0, 0, 0, 0); } 
    | expr '+' expr                              { $$ = astCreate(AST_ADD, 0, $1, $3, 0, 0); }
    | expr '-' expr                              { $$ = astCreate(AST_SUB, 0, $1, $3, 0, 0); }
    | expr '*' expr                              { $$ = astCreate(AST_MULT, 0, $1, $3, 0, 0); }
    | expr '/' expr                              { $$ = astCreate(AST_DIV, 0, $1, $3, 0, 0); }
    | expr '<' expr                              { $$ = astCreate(AST_LESS, 0, $1, $3, 0, 0); }
    | expr '>' expr                              { $$ = astCreate(AST_GREAT, 0, $1, $3, 0, 0); }
    | expr OPERATOR_LE expr
    | expr OPERATOR_GE expr
    | expr OPERATOR_EQ expr
    | expr OPERATOR_DIF expr
    | expr '&' expr
    | expr '|' expr
    | expr '~' expr
    | '(' expr ')'                                { $$ = $2; }
    ;

func_val: expr func_val       { astPrint($1, 0); }
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