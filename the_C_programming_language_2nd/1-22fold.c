#include <stdio.h>

#define FOLD     10
#define MAXLINE 100
#define IN        1
#define OUT       0

main(){
    int  a=0, c, i=0, state;
    char line[MAXLINE];
    
    state = OUT;
    while((c=getchar()) != '['){

        if(c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if(state == OUT)
            state = IN;

        if(a >= FOLD && state == OUT){
            a=0;
            line[i] = '\n';
            i++;
        }
        else{
            a++;
            line[i] = c;
            i++;
        } 
    }
        printf("\n%s\n", line);
}
