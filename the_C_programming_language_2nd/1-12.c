#include    <stdio.h>
#include    <mylib.h>
#define IN      1
#define OUT     0
#define LIMIT 100

/*Si esta OUT c = \n*/

main(){
	int c, i=0;
	char s[LIMIT];

	printf("\n");
	repeater('-',62);

	printf("| This program will print it's output at the end of the loop, |\n| each word in a new line.                                    |\n");
	
	repeater('-',62);
	printf("\n");
	
	while((c=getchar()) != '['){
		s[i] = c;
		if(s[i] == ' ' || s[i] == '\t')
			s[i] = '\n';
		i++;
	}	
	printf("\n%s\n\n", s);
}
