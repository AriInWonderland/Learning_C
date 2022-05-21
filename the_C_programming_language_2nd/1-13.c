/*  Write a program to print a histogram of the lengths of words in its input. 
 *  It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.*/
#include <stdio.h>
#include <mylib.h>

#define LIMIT 100

main(){
    int a, c, i=0, lc=0;
    char wc[LIMIT];

    printf("\n");

    while((c=getchar()) != '['){
    lc++;
        if(c == ' ' || c == '\n' || c == '\t'){
            wc[i] = lc; 
            lc =0 ;
            i++;
        }
    } 
    printf("\nlc = %d\nwc = %s\n\n", lc, wc);
}
