/* The real excercise is in mylib.h since the task is to make a function,
 * but I wanted to experiment with stuff a bit*/

#include <stdio.h>
#include "mylib.h"

#define MAXLINE 100

main(){
    int c, len, i=0;
    char s[MAXLINE];

    i = getline(s, MAXLINE);
    
    len = getlen(s, MAXLINE); /* This two lines just adjusts the */
    s[len] = '\0';            /* string to not print the newline */
 
    c = htoi(s, MAXLINE);
    printf("\n%s₁₆ = %d₁₀ \n", s, c);
}    
