/* 1-16, I am not 100% sure of what I have to do,
 * so I'll just make it also print how long the line is*/

#include <stdio.h>
#include <mylib.h>

#define LIMIT 1000

main(){
    int len, max=0;
    char line[LIMIT], longest[LIMIT];

    while((len=getline(line,LIMIT)) > 0){
        if(len>max){
            max = len;
            copy(longest, line);
        }
    }
    if(max>0)
        printf("The longest line was:\n%s\nWith %d characters.\n", longest, max);

    return 0;
}
