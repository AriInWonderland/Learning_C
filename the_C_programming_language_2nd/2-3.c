/* The real excercise is in mylib.h since the task is to make a function,
 * but I wanted to experiment with stuff a bit*/

#include <stdio.h>
#include "mylib.h"
#include <ctype.h>

#define MAXLINE 100

int htoi(char s[]){
    int i, n, j, c=0, sk, dec=0;
    
    n = getlen(s, MAXLINE);   
    for(sk=0; s[sk] == 'x' || s[sk] == 'X' || s[sk] == '0'; sk++) 
        ; 

    for(i=sk, j=n-sk-1; i < n; i++, j--){
        printf("[DEBUG] j = %d\n", j);
        if(isdigit(s[i]))
            c = s[i] - '0'; 

        else{
            switch(s[i]){
                case 'A': case 'a':
                    c = 10;
                    break;
                case 'B': case 'b':
                    c = 11;
                    break;
                case 'C': case 'c':
                    c = 12;
                    break;
                case 'D': case 'd':
                    c = 13;
                    break;
                case 'E': case 'e':
                    c = 14;
                    break;
                case 'F': case 'f':
                    c = 15;
                    break;
            }
        }
        printf("[DEBUG] c = %d\n", c);
        dec += c * pot(16, j);
        printf("j = %d, dec = %d\n", j,dec);
    }
    return dec;
}

main(){
    int c, i=0;
    char s[MAXLINE];

    i = getline(s, MAXLINE);
 
    c = htoi(s);
    printf("[DEBUG] 16^3 = %d\n", pot(16,3));
    printf("dec = %d\n", c);
}    
