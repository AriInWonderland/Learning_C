/* Remove all coments from a C program, in this case, ANSI C.*/
#include <stdio.h>

#define IN        1
#define OUT       0
#define MAXLINE 100

main(){
    int c, i=0, state;
    char line[MAXLINE];

    state = OUT;
    while((c=getchar()) != '['){
        if(c == '/')
            if((c=getchar()) == '*')
                state = IN;
            else{
                line[i] = '/';
                i++;
            }

        if(state == OUT){
            line[i] = c;
            i++;
        }

        if(state == IN)
            if(c=='*') 
                if((c=getchar()) == '/')
                    state = OUT;
    }
    printf("\n%s\n", line);
}
