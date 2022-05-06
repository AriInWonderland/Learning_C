#include <stdio.h>
#include <mylib.h>
#define REPEAT 59
#define REPEATED '-'
#define LIMIT 100

main(){
	int c, i;
	char s[LIMIT];

    printf("\n"); 
    repeater(REPEATED, REPEAT);
    printf("| This program shows it's output replacing each \\ with \\\\, |\n| each tab with \\t\t\t\t\t\t\t\t\t    |\n| and each new line with \\n, \t\t\t\t\t\t    |\n| making them readable in a 'code style'.  \t\t\t    |\n");
    repeater(REPEATED, REPEAT);

    printf("\n");
	for(i=0; i <= LIMIT-1 && (c=getchar()) != '['; i++){
    s[i] = c;
        if(s[i] == '\n'){
            s[i] = ' ';
            i++;
            s[i] = '\\';
            i++;
            s[i] = 'n';
            i++;
            s[i] = ' ';
        }
		if(s[i] == '\t'){
            s[i] = ' ';
            i++;
			s[i] = '\\';
			i++;
			s[i] = 't';
            i++;
            s[i] = ' ';
		}
		if(s[i] == '\\'){ 
            s[i] = ' ';
			i++;
			s[i] = '\\';
            i++;
            s[i] = '\\';
            i++;
            s[i] = ' ';
		}
	}
    printf("\n");
    repeater(REPEATED, REPEAT);
	printf("\n%s\n", s);
}
