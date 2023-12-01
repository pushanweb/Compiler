%{
	#include<stdio.h>
	#include <string.h>
	#include<stdlib.h>
	#include "parser.tab.h"
%}

identifiers "var_"([a-zA-Z0-9_])+
numbers [-]?[0-9]+
fnumbers [0-9]*\.[0-9]+"f"?
single_line_comment [/][/].*
multiple_line_comment [/]"cmnt"[/][a-zA-Z0-9!@#*(){}_+-,.:\|?><\n\t ]*[/]"cmnt"[/]

/*RE and Action*/

%%


{single_line_comment} {
	printf("single line comment\n");

}
{multiple_line_comment} {
	printf("multiple_line_comment");
}

"library"[ ]*[<].+[>] { printf("Include the %s\n",yytext); }


"inc"   {return inc;}
"dec"	{return dec;}
"oppose" { return OPP; }
"sop"	 { return LB; }
"scp"	  { return RB; }
"multiple" { return SWITCH; }
"choice"	{ return CASE; }
"nop"     {  return DEFAULT; }
"wlp" 	{ return WHILE; }
[:]     { return COL; }
{numbers}	{ yylval.number = atoi(yytext); return NUM;}
{fnumbers}  { yylval.fnumber = atof(yytext); return FNUM;}
"flp"   { return FOR; }	
"fop"	{ return LP; }
"fcp"	{ return RP; }
"$"	{ return CM; }
"#"	{ return SM; }
"iff"		{ return IF; }
"oriff"	{ return ELIF; }
"otherwise"		{ return ELSE; }
"add"	{ return PLUS; }
"sub"	{ return MINUS; }
"mul"	{ return MULT; }
"div"	{ return DIV; }
"exp"	{ return POW; }
[@]		{ return EQ; }
"grt"	{ return GT; }
"lrt"	{ return LT; }
"grt@"  { return GTE; }
"lrt@"  { return LTE; }
"@@"    { return EE; }
"!@"	{ return NEQ; }
"modulus" { return MOD;}
"readin" { return SCAN; }
"writeout" { return PRINT; }
">>" { return GG; }
"Inttype" { return INT; }
"Floattype" { return FLOAT; }
"Chartype" { return CHAR; }
"main" { return MAIN; }
"fact" { return FACTO; }
"prime" { return PRIME; }
"max" { return MAX; }
"min" { return MIN; }
["][a-zA-Z0-9!@#*(){}_+-,.:\|?><\t ]*["] { yylval.string=strdup(yytext); return STR; }
{identifiers} { yylval.string=strdup(yytext); return VAR; }

[ \t\n]*	

.	{
		printf("Invalid expression or statement\n");
	}
%%


int main()
{
	yyin = freopen("in.txt","r",stdin);
	yyout = freopen("out.txt","w",stdout);
	yyparse();
	
}