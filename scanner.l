%{
#include "tokens.h"
#include "hash.h"

int running = 1;
int lineNumber = 1;
int charLength = 1;

int yywrap();
int isRunning(void);
int getLineNumber(void);
void initMe(void);
%}

%x COMMENT
%x LITERAL_STRING
%x CHAR_STRING
%x IDENTIFIER

%%
cara                                { return KW_CARA; }
inte                                { return KW_INTE; }
real                                { return KW_REAL; }
se                                  { return KW_SE; }
entaum                              { return KW_ENTAUM; }
senaum                              { return KW_SENAUM; }
enquanto                            { return KW_ENQUANTO; }
entrada                             { return KW_ENTRADA; }
escreva                             { return KW_ESCREVA; }
retorne                             { return KW_RETORNE; }
[-;(){}\[\]=\+*/<>&|~]              { return yytext[0]; }
"<="                                { return OPERATOR_LE; }
">="                                { return OPERATOR_GE; }
"=="                                { return OPERATOR_EQ; }
"!="                                { return OPERATOR_DIF; }
[._][0-9|a-z]*                      { insertNode(yytext, TK_IDENTIFIER); return TK_IDENTIFIER; }
[a-z]*                              { insertNode(yytext, TK_IDENTIFIER); return TK_IDENTIFIER; }
[0-9]+                              { insertNode(yytext, LIT_INTEIRO);  return LIT_INTEIRO; }
[0-9]+.[0-9]+                       { insertNode(yytext, LIT_FLOAT);  return LIT_FLOAT; }
[, \t]
\"                                  { BEGIN(LITERAL_STRING); }   
\'                                  { BEGIN(CHAR_STRING); }                   
"\n"                                { lineNumber++; }
"/"{3}                              { BEGIN(COMMENT); }
.                                   { return TOKEN_ERROR; }

<COMMENT>["\\"]{3}                  { BEGIN(INITIAL); }
<COMMENT>"\n"                       { lineNumber++; }
<COMMENT>.      

<LITERAL_STRING>\"                  { BEGIN(INITIAL); return LIT_STRING; }
<LITERAL_STRING>([^\\\"]|\\.)*      { insertNode(yytext, LIT_STRING); }

<CHAR_STRING>\'                     { BEGIN(INITIAL); if (charLength == 1) return LIT_CHAR; }
<CHAR_STRING>([^\\\']{2,}|\\.{2,})  { charLength++; return TOKEN_ERROR; }
<CHAR_STRING>([^\\\']{1}|\\.{1})    { charLength = 1; insertNode(yytext, LIT_CHAR); }

<IDENTIFIER>[ ]                     { BEGIN(INITIAL); return TK_IDENTIFIER; }
<IDENTIFIER>([^ ]|\\.)*             { insertNode(yytext, TK_IDENTIFIER); }    

%%

#include "main.c"
#include "hash.c"