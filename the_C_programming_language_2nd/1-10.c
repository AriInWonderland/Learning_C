#include <stdio.h>

#define LIMIT 100

main(){
	int c, i;
	char s[LIMIT];

	for(i=0; i <= LIMIT-1 && (c=getchar()) != '['; i++){
		s[i] = c;
		if(s[i] == '\t'){
			s[i] = '\\';
			i++;
			s[i] = 't';
		}
		if(s[i] == '\b'){
			s[i] = '\\';
			i++;
			s[i] = 'b';
		}
		if(s[i] == '\\'){
			s[i] = '\\';
			i++;
			s[i] = '\\';
		}
	}
	printf("\n%s\n", s);
}
