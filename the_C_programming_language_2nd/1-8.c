/* This can also be done with a switch but I personally prefer if loops, it's easier to read in shorter programs like this one.*/

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

	printf("|This program will count the blanks, tabs and\t\t\t |\n|new lines from it's input.\t\t\t\t\t\t\t |\n");
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

	printf("|Blanks = %10d|\n|Tabs = %12d|\n|New Lines = %7d|\n", bl, tabs, nl);

	repeater(REPEATED,REPEAT1);
	printf("\n");
	
	return 0;
 }
