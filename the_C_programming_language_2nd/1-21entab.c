/* Replace strings of spaces for tabs*/
#include <stdio.h>

#define TABSTOPS   4
#define MAXLINE  100

main(){
    int c, bl, i=0;
    char line[MAXLINE];

    while((c=getchar()) != '['){
        if(c == ' ')
            bl++;
        else
            bl = 0;

        if(bl == TABSTOPS){
            i -= 3;
            line[i] = '\t';
            i++;
        }
        else 
            line[i] = c;
            i++;
    }
    printf("\n%s\n", line);
}        
