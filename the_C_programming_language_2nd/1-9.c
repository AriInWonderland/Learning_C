#include <stdio.h>
#include <mylib.h>
#define REPEAT 49
#define LIMIT 100

main(){
	int c,i;
	char s[LIMIT];
	
	printf("\n");
	repeater('-', REPEAT);

	printf("|Este programa repetira lo que ingrese el usuario|\n|con la diferencia que reemplazara\t\t\t    |\n|TODOS los espacios por uno solo.\t\t\t    |\n");

	repeater('-', REPEAT);
	printf("\n");
	
	for(i=0; i < LIMIT && (c=getchar())!= '[';i++){
		s[i] = c;
		if(s[i] == ' ' && s[i-1] == ' ')
			i--;
	}
	printf("\n%s\n\n", s);

	return 0;	
}
