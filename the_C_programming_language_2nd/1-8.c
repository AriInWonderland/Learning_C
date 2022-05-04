/* Se puede hacer con switch pero me parece que seria muy largo el codigo y con los if es mas rapido, corto y facil de leer mas que nada*/
#include <stdio.h>
#include <mylib.h>
#define REPEAT0   61
#define REPEAT1   20
#define REPEATED '-'

main(){
	int bl, tabs, nl, c;
	bl = tabs = nl = 0;
	
	printf("\n");
	repeater(REPEATED,REPEAT0);

	printf("|Este programa contara los espacios en blanco, tabulaciones y|\n|new lines del input que usted ingrese\t\t\t\t\t |\n");
	repeater(REPEATED,REPEAT0);
	printf("\n");

	while((c=getchar()) != '['){
		if(c == ' ')
			++bl;
		if(c == '\n')
			++nl;
		if(c == '\t')
			++tabs;
		}
	
	printf("\n");
	repeater(REPEATED,REPEAT1);

	printf("|Espacios = %8d|\n|Tabulaciones = %4d|\n|New Lines = %7d|\n", bl, tabs, nl);

	repeater(REPEATED,REPEAT1);
	printf("\n");
	
	return 0;
 }
