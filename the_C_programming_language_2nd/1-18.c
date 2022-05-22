/* Write a program to remove trailing blanks and tabs from each line of input, and to delete enturely blank lines. 
 * Okay, I think I have to remove the spare blanks at the end of lines and blank lines.*/

#include <stdio.h>
#include <mylib.h>

#define LIMIT 1000

main(){
    int len,i;
    char line[LIMIT], tt[LIMIT];

    while(len=getline(line,LIMIT) > 0){
        i=rmv(line);
        if(i>0)
        concat(tt,line);
    }
    printf("\n%s\n", tt);
}
