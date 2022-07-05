#include <stdio.h>

#define TABSTOPS 12
#define TABSPACE 4
#define MAXLINE 100

char line[MAXLINE];

main(){
    int a=0,c, i=0, skip;

    while((c=getchar()) != '['){
        if(c=='\t'){
            skip = i+TABSPACE;
            for(; i< skip; i++)
                line[i] = ' ';    
        }
        else{
            line[i] = c;
            i++;
        }
    }
    printf("\n%s\n", line);
}
