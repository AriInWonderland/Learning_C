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

	printf("Este programa copiara el texto ingresado una palabra por linea.\n");
	
	repeater('-',62);
	printf("\n");
	
	while((c=getchar()) != '['){
		s[i] = c;
		if(s[i] == ' ' || s[i] == '\t')
			s[i] = '\n';
		i++;
	}	
	printf("%s\n", s);
}
