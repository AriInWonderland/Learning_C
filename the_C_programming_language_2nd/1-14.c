/* Write a program to print a histogram of the frequencies of different characters in its input.
 * I'll use the vowels and some other common letters.*/
#include <stdio.h>
#include <mylib.h>

main(){
    int c,i;
    int clc[8], l[8] = {'a','e','i','o','u','n','t','p'};
    /* You could automate the l[] array using the ASCII code and a for() loop, the problem is that
     * I couldn't find a way to use only the letters I wanted in a fast way*/

    for(i=0;i<=7;i++)
        clc[i]=0;
    i=0;
    printf("\n");

    while((c = getchar()) != '['){
        for(i=0;i<=7;i++)
            if(c==l[i])
                clc[i]++;
    } 
    printf("\n");

    for(i=0;i<8;i++){
        printf("Letter %c, %2d time/s: ", l[i], clc[i]);
            for(c=0;c<clc[i];c++)
                printf("=");
        printf("\n");
    }
printf("\n");
}
