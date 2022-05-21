/*  Write a program to print a histogram of the lengths of words in its input. 
 *  It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.*/
#include <stdio.h>
#include <mylib.h>

#define LIMIT 100
#define IN 1
#define OUT 0

main(){
    int a,c,i, state, lc=0;
    int wc[LIMIT];

    for(i=0;i<=LIMIT;i++)
        wc[i]=0;
    i=0;
    printf("\n");

    state = OUT;
    while((c = getchar()) != '['){

        if(c == ' '|| c == '\n' || c == '\t')
            state=OUT;
        else if(state == OUT){
            state=IN;
        }
        if(state == IN)
            lc++;

        if(state == OUT){
            wc[i] = lc;
            lc = 0;
            i++;
        }
    } 
    wc[i] = lc;
    lc = 0;
    i++;

    for(i=0; wc[i] != '\0'; i++){
        printf("Word %2d, %2d Letters: ", i+1, wc[i]);
        for(a=0; a < wc[i];a++)
            printf("=");
        printf("\n");
    }
}
