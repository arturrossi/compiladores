%{ 
    #include "hash.h"
    #include "ast.h"

    int yyerror();
    int getLineNumber();
    int yylex();
    extern FILE *yyout;
%}

%union 
{
    HASH_NODE *symbol;
    AST *ast;
} 

%token<symbol> KW_CARA          
%token<symbol> KW_INTE          
%token<symbol> KW_REAL          

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
%type<ast> dec;
%type<ast> decresto;
%type<ast> decl;
%type<ast> resto;
%type<ast> func_param;
%type<ast> func_param_l;
%type<ast> val_lista;
%type<ast> bloco;
%type<ast> func_val;
%type<symbol> val;

%token<symbol> TK_IDENTIFIER    

%token<symbol> LIT_INTEIRO      
%token<symbol> LIT_FLOAT        
%token<symbol> LIT_CHAR         
%token<symbol> LIT_STRING       

%token TOKEN_ERROR   

%left '+' '-'
%left '*' '/'
%left '<' '>'
%left '&' '|'
%left OPERATOR_LE OPERATOR_GE
%left OPERATOR_EQ OPERATOR_DIF
%left '~'

%%

programa: decl                              {  astPrint($1, 0); astDecompile($1, yyout); }
    ;
    
decl: dec resto                             { $$ = astCreate(AST_LATTR, 0, $1, $2, 0, 0); }    
    |                                       { $$ = 0;}
    ;
    
dec: KW_INTE TK_IDENTIFIER decresto       { $$ = astCreate(AST_ATTRINTE, $2, $3, 0, 0, 0); }
    | KW_CARA TK_IDENTIFIER decresto     { $$ = astCreate(AST_ATTRCARA, $2, $3, 0, 0, 0); }
    | KW_REAL TK_IDENTIFIER decresto      { $$ = astCreate(AST_ATTRREAL, $2, $3, 0, 0, 0); }
    ;

resto: dec resto                            { $$ = astCreate(AST_LATTR, 0, $1, $2, 0, 0); }
    |                                       { $$ = 0; }
    ;

decresto: '=' expr ';'                       { $$ = astCreate(AST_ATTR, 0, $2, 0, 0, 0); }
    | '(' func_param_l ')' bloco               { $$ = astCreate(AST_FUNC_PARAM, 0, $2, $4, 0, 0); }
    | '[' LIT_INTEIRO ']' ';'                { $$ = astCreate(AST_ATTR_VECTOR, $2, 0, 0, 0, 0); }
    | '[' LIT_INTEIRO ']' '=' val_lista ';'  { $$ = astCreate(AST_ATTR_VECTOR, $2, $5, 0, 0, 0); }
    ;

bloco: '{' lcmd '}'                           { $$ = astCreate(AST_BLOCO, 0, $2, 0, 0, 0); }           
    ;

lcmd: cmd lcmd                                 { $$ = astCreate(AST_LCMD, 0, $1, $2, 0, 0); }
    | ';'                                      { $$ = 0; }
    |                                          { $$ = 0; }
    ;

cmd: TK_IDENTIFIER '=' expr ';'                 { $$ = astCreate(AST_ATTR, $1, $3, 0, 0, 0); }
    | TK_IDENTIFIER '[' expr ']' '=' expr ';'   { $$ = astCreate(AST_VECTOR_IND, $1, $3, astCreate(AST_ATTR, 0, $6, 0, 0, 0), 0, 0); }
    | KW_ESCREVA expr_escreva ';'               { $$ = astCreate(AST_ESCREVA, 0, $2, 0, 0, 0); }
    | KW_RETORNE expr ';'                       { $$ = astCreate(AST_RETORNE, 0, $2, 0, 0, 0); }
    | KW_ENTAUM cmd KW_SE '(' expr ')'           { $$ = astCreate(AST_ENTAUM, 0, $2, astCreate(AST_SE, 0, $5, 0, 0, 0), 0, 0); }
    | KW_ENTAUM cmd KW_SENAUM cmd KW_SE '(' expr ')' { $$ = astCreate(AST_ENTAUM, 0, $2, astCreate(AST_SENAUM, 0, $4, 0, 0, 0), astCreate(AST_SE, 0, $7, 0, 0, 0), 0); }
    | cmd KW_ENQUANTO '(' expr ')'               { $$ = astCreate(AST_ENQUANTO, 0, $1, $4, 0, 0); }
    ;

expr_escreva: expr expr_escreva                 { $$ = astCreate(AST_EXPRL, 0, $1, $2, 0, 0); }
    |                                           { $$ = 0;}
    ;

expr: LIT_INTEIRO                               { $$ = astCreate(AST_SYMBOL, $1, 0, 0, 0, 0); }
    | LIT_FLOAT                                 { $$ = astCreate(AST_SYMBOL, $1, 0, 0, 0, 0); } 
    | LIT_CHAR                                  { $$ = astCreate(AST_SYMBOL, $1, 0, 0, 0, 0); } 
    | TK_IDENTIFIER '[' expr ']'                { $$ = astCreate(AST_VECTOR_IND, $1, $3, 0, 0, 0); } 
    | TK_IDENTIFIER                             { $$ = astCreate(AST_SYMBOL, $1, 0, 0, 0, 0); }
    | TK_IDENTIFIER '(' func_val ')'            { $$ = astCreate(AST_FUNC_CALL, $1, $3, 0, 0, 0); } 
    | KW_ENTRADA                                 { $$ = astCreate(AST_SYMBOL, $1, 0, 0, 0, 0); } 
    | expr '+' expr                              { $$ = astCreate(AST_ADD, 0, $1, $3, 0, 0); }
    | expr '-' expr                              { $$ = astCreate(AST_SUB, 0, $1, $3, 0, 0); }
    | expr '*' expr                              { $$ = astCreate(AST_MULT, 0, $1, $3, 0, 0); }
    | expr '/' expr                              { $$ = astCreate(AST_DIV, 0, $1, $3, 0, 0); }
    | expr '<' expr                              { $$ = astCreate(AST_LESS, 0, $1, $3, 0, 0); }
    | expr '>' expr                              { $$ = astCreate(AST_GREAT, 0, $1, $3, 0, 0); }
    | expr OPERATOR_LE expr                      { $$ = astCreate(AST_LE, 0, $1, $3, 0, 0); }
    | expr OPERATOR_GE expr                     { $$ = astCreate(AST_GE, 0, $1, $3, 0, 0); }
    | expr OPERATOR_EQ expr                     { $$ = astCreate(AST_EQ, 0, $1, $3, 0, 0); }
    | expr OPERATOR_DIF expr                    { $$ = astCreate(AST_DIF, 0, $1, $3, 0, 0); }
    | expr '&' expr                             { $$ = astCreate(AST_AND, 0, $1, $3, 0, 0); }
    | expr '|' expr                             { $$ = astCreate(AST_OR, 0, $1, $3, 0, 0); }
    | expr '~' expr                             { $$ = astCreate(AST_NOT, 0, $1, $3, 0, 0); }
    | '(' expr ')'                                { $$ = $2; }
    ;

func_val: expr func_val                         { $$ = astCreate(AST_EXPRL, 0, $1, $2, 0, 0); }
    |                                           { $$ = 0; }
    ;

func_param_l: func_param func_param_l           { $$ = astCreate(AST_FUNC_PARAML, 0, $1, $2, 0, 0); }
    |                                           { $$ = 0; }
    ;

func_param: KW_INTE TK_IDENTIFIER func_param    { $$ = astCreate(AST_DECL_INT, $2, $3, 0, 0, 0); }
    | KW_CARA TK_IDENTIFIER func_param          { $$ = astCreate(AST_DECL_CARA, $2, $3, 0, 0, 0); }
    | KW_REAL TK_IDENTIFIER func_param          { $$ = astCreate(AST_DECL_REAL, $2, $3, 0, 0, 0); }
    |                                           { $$ = 0; }
    ;

val_lista: val val_lista                        { $$ = astCreate(AST_LVAL, $1, $2, 0, 0, 0); }
    |                                           { $$ = 0; }
    ;

val: LIT_CHAR                                   { $$ = $1; }
    | LIT_FLOAT                                 { $$ = $1; }
    | LIT_INTEIRO                               { $$ = $1; }
    | LIT_STRING                                { $$ = $1; }
    ;

%%

int yyerror () {
    fprintf(stderr, "Syntax error on line %d\n", getLineNumber());
    exit(3);
}