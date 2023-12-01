%{
	#include<stdio.h>
	#include <math.h>
	int cnt=1,val,track=0, trackif=0;
	typedef struct entry {
    	char *str;
    	int n;
        int var_type;
        int ival;
		float fval;
		char *cval;
	}store;
    store st[1000];
	void ins(store *p, char *s, int n);

    void set_var_type(int type){
		int i;
		for(i=1; i<=cnt; i++){
			if(st[i].var_type == 0){
				st[i].var_type = type;
			}
		}
	} 
	
	
%}
%union 
{
        int number;
        char *string;
        float fnumber;
}
/* BISON Declarations */

%token<fnumber> FNUM
%token<number> NUM INT FLOAT CHAR
%token<string> VAR STR
%token<string> IF ELIF ELSE MAIN LP RP LB RB CM SM PLUS MINUS MULT DIV POW ASSIGN FOR COL WHILE BREAK DEFAULT CASE SWITCH GG PRINT EQ NEQ MOD SCAN FACTO PRIME MAX MIN OPP
%type <string> statement else else_if ID1
%type <number> expression TYPE 
%nonassoc ELIF
%nonassoc ELSE
%left LT GT GTE LTE EE
%left PLUS MINUS
%left MULT DIV
%left POW MOD inc dec

/* Simple grammar rules */

%%

program: MAIN LP RP LB cstatement RB { printf("\nSuccessful compilation\n"); }
	 ;

cstatement: /* empty */

	| cstatement statement
	
	| cstatement cdeclaration 

	;

cdeclaration: ID1 GG TYPE SM	{ set_var_type($3); }

TYPE : INT {$$ = 1; printf("Variable type--> Integer\n");}

     | FLOAT {$$ = 2; printf("Variable type--> Float\n");}

     | CHAR {$$ = 3; printf("Variable type--> Character\n");}
     ;

ID1  : ID1 CM VAR	{
						if(look_for_key($3))
						{
							printf("%s is already declared\n", $3 );
						}
						else
						{
							ins(&st[cnt],$3, cnt);
							cnt++;
							
						}
			        }

     |VAR	{
				if(look_for_key($1))
				{
					printf("%s is already declared\n", $1 );
				}
				else
				{
					ins(&st[cnt],$1, cnt);
					cnt++;
				}
			}
     ;


statement: SM
	| SWITCH LP expression RP LB BASE RB    {printf("SWITCH case.\n");val=$3;} 

	| expression SM 			{ printf("\nvalue of expression: %d\n", ($1)); }

       

	| IF LP expression RP LB statement RB else_if else {
								if($3)
								{
									printf("\nWe are  in IF and the value is: %d\n",($6));
								}
								else
								{
									printf("\ncondition value zero in IF block\n");
								}
							}
										   
	| FOR LP NUM COL NUM RP LB statement RB     {
	   printf("For Loop :\n");
	   if($5>$3){
            int i;
            for(i=$3;i<$5;i++){
                printf("Step : %d and value of expression : %d\n",i,$8);
	        }
       }
       else{
            int i;
            for(i=$3;i>$5;i--){
                printf("Step : %d and value of expression : %d\n",i,$8);
            }
        }
	}

    | FOR LP NUM COL NUM COL NUM RP LB statement RB     {
	   printf("For Loop :\n");
	   if($5>$3){
            int i;
            for(i=$3;i<$5;i+=$7){
                printf("Step : %d and value of expression : %d\n",i,$8);
	        }
       }
       else{
            int i;
            for(i=$3;i>$5;i-=$7){
                printf("Step : %d and value of expression : %d\n",i,$8);
            }
        }
	}

    
	/*while loop starts*/

	| WHILE LP NUM LT NUM RP LB statement RB   {
								int i = $5,j=0;
								printf("While LOOP:\n");
								while($3 < i)
								{
									printf("step: %d value of expression :%d \n" ,j, $8);
									i--;
									j++;
								}
								printf("\n");
								
										

						}

	| WHILE LP NUM GT NUM RP LB statement RB   {
								int i = $5,j=0;
								printf("While LOOP:\n");
								while($3 > i)
								{
									printf("step: %d value of expression :%d \n" ,j, $8);
									i++;
									j++;
								}
								printf("\n");
								
										

						}

    | WHILE LP NUM GTE NUM RP LB statement RB   {
								int i = $5,j=0;
								printf("While LOOP:\n");
								while($3 >= i)
								{
									printf("step: %d value of expression :%d \n" ,j, $8);
									i++;
									j++;
								}
								printf("\n");
								
										

						}
    
    | WHILE LP NUM LTE NUM RP LB statement RB   {
								int i = $5,j=0;
								printf("While LOOP:\n");
								while($3 <= i)
								{
									printf("step: %d value of expression :%d \n" ,j, $8);
									i++;
									j++;
								}
								printf("\n");
								
										

						}

    | VAR EQ expression SM {
                                $$ = $3;
                                if(look_for_key($1)){
                                    int i = look_for_key($1);
                                    if(st[i].var_type==3){
                                        //variable[i].cval = (char)$3;
                                        st[i].cval = (char*)&$3;
                                        printf("\nVariable value--> %s\n", st[i].cval);
                                    }
                                    else if(st[i].var_type==1){
                                        st[i].ival = $3;
                                        printf("\nVariable value--> %d\n", st[i].ival);
                                    }
                                    else if(st[i].var_type==2){
                                        st[i].fval = (float)$3;
                                        printf("\nVariable value--> %f\n", st[i].fval);
                                    }
                                }
                                else{
                                    printf("\nVariable is not declared\n");
                                }
                            }
    
    | PRINT LP VAR RP SM {
                            int i = look_for_key($3);
                            if(st[i].var_type == 1){
                                printf("Int Variable name--> %s, Value--> %d\n", st[i].str, st[i].ival);
                            }
                            else if(st[i].var_type == 2){
                                printf("Float Variable name--> %s, Value--> %f\n", st[i].str, st[i].fval);
                            }
                            else if(st[i].var_type == 3){
                                printf("Char Variable name--> %s, Value--> %s\n", st[i].str, st[i].cval);
                            }
                        }

    | PRINT LP expression RP SM { printf("%d\n",$3); }

    | SCAN LP VAR RP SM {
                int i = look_for_key($3);
                printf("\nRead command found for variable--> %s, but no further implementaion\n",st[i].str);
            }


    ;
///////////////////////
	
BASE : Cs Dflt 
        ;

Cs    : CASE NUM COL expression SM Cs  {
            
            if(val==$2){
                    track=1;
                    printf("\nCase No : %d  and Result :  %d\n",$2,$4);
            }
        }
        | 
        ;

Dflt    : DEFAULT COL expression SM    {
            if(track!=1){
                printf("\nResult in default Value is :  %d\n",$3);
            }
            track=0;
        }
    ;    
	/////////////////////////////
	
	
expression: NUM				{ $$ = $1; 	}

    | FNUM      { $$ = yylval.fnumber; 	}

    | STR  { $$ = yylval.string; }

	| expression PLUS expression	{ $$ = $1 + $3; }

	| expression MINUS expression	{ $$ = $1 - $3; }

	| expression MULT expression	{ $$ = $1 * $3; }

	| expression DIV expression	{ 	if($3) 
				  		{
				     			$$ = $1 / $3;
				  		}
				  		else
				  		{
							$$ = 0;
							printf("\ndivision by zero\t");
				  		} 	
				    	}
	| expression POW expression { $$ = pow($1,$3); }

    | expression MOD expression	{ $$ = $1 % $3; }

	| expression LT expression	{ $$ = $1 < $3; }

    | expression LTE expression	{ $$ = $1 <= $3; }

	| expression GT expression	{ $$ = $1 > $3; }

    | expression GTE expression	{ $$ = $1 >= $3; }

	| LP expression RP		{ $$ = $2;	}
	
	| inc expression         { $$=$2+1; printf("inc: %d\n",$$);}

    | dec expression         { $$=$2-1; printf("dec: %d\n",$$);}

    | VAR  {
	            int id_index = look_for_key($1);
	            if(id_index == 0)
	            {
		            yyerror("VARIABLE DOESN'T EXIST");
	            }
	            else
	            {
		            /*if(st[id_index].var_type == 3)
                    {
                    $$ = st[id_index].cval;
                    }*/
                    if(st[id_index].var_type == 1)
                    {
                        $$ = st[id_index].ival;
                    }
                    else if(st[id_index].var_type == 2)
                    {
                        $$ = st[id_index].fval;
                    }
	            }
            }

    | MAX LP expression CM expression RP{
            if($3>$5) {$$=$3; printf("%d is greater than %d\n",$3,$5);}
            else {$$=$5; printf("%d is greater than %d\n",$5,$3);}
        }

    | MIN LP expression CM expression RP {
            if($3<$5) {$$=$3; printf("%d is less than %d\n",$3,$5);}
            else {$$=$5; printf("%d is less than %d\n",$5,$3);}
        }

    | FACTO LP expression RP	{
            int j = $3;
            int i, result;
            result = 1;
            if(j==0){
                $$=result;
                printf("\nFactorial of %d is %d", j, result);
            }
            else{
                for(i = 1; i <= j; i++){
                    result = result*i;
                }
                $$=result;
                printf("\nFactorial of %d is %d", j, result);
            }
            
        }
    
    | PRIME LP expression RP {
            int n, i, flag = 1;
            n = $3;
            for (i = 2; i <= n / 2; ++i) {
                if (n % i == 0) {
                    flag = 0;
                    break;
                }
            }
            $$=flag;

        }

    | OPP LP expression RP {
        if($3) $$=0;
        else $$=1;
    }
	
	;
	///////////////////////////////////////


else: ELSE LB statement RB {
            printf("\nELSE condition is detected");

            }
    | 
    ;

//////////////////////////

else_if: ELIF LP expression RP LB statement RB else_if {
                    if($3)
                        {
                            printf("\nWe are  in ELSEIF and the value is: %d\n",($6));
                        }
                        else
                        {
                            printf("\ncondition value zero in ELSEIF block\n");
                        }
                    }

        |
        ;

%%
//////////////////////////
void ins(store *p, char *s, int n)
{
  p->str = s;
  p->n = n;
  p->var_type = 0;
}

int look_for_key(char *key)
{
    int i = 1;
    char *name = st[i].str;
    while (name) {
        if (strcmp(name, key) == 0)
            return st[i].n;
        name = st[++i].str;
    }
    return 0;
}



/////////////////////////


///////////////////////////


int yywrap()
{
return 1;
}


yyerror(char *s){
	printf( "%s\n", s);
}