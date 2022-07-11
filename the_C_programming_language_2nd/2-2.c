/* Re-write the loop for (i=0; i< lim-1 && (c=getchar()) != '\n' && c != EOF; ++i) without using && or || */

#include <stdio.h>

main(){
    int c, i, lim = 100;
    char s[lim];

    i=0;
    while((c = getchar()) != '\n')
        if(c != '[') /*Redundant because to make everything execute you need to send \n anyways*/
            if(i < lim){
                s[i] = c;
                i++;
            } 
    printf("\n%s\n", s);
    printf("\ni = %d\n", i);
}
