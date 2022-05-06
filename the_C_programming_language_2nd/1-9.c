#include <stdio.h>
#include <mylib.h>
#define REPEAT 49
#define REPEATED '-'
#define LIMIT 100

main(){
	int c,i;
	char s[LIMIT];
	
	printf("\n");
	repeater(REPEATED, REPEAT);

    printf("| This program will repeat it's input replacing  |\n| every spaces with only one blank. \t\t    |\n");

	repeater(REPEATED, REPEAT);
	printf("\n");
	
	for(i=0; i < LIMIT && (c=getchar())!= '['; i++){
		s[i] = c;
		if(s[i] == ' ' || s[i] == '\t') 
            if(s[i-1] == ' ' || s[i-1] == '\t')
			    i--;
	}
	printf("\n%s\n\n", s);

	return 0;	
}

/* I am not sure why but that was the way it gave me the best results. */
