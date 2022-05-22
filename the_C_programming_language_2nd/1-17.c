/* 1-17, Write a program to print all input lines that are longer than 80 characters.
 * I'll do it with 10, I am not crazy enough to type 80 characters each time.*/

#include <stdio.h>
#include <mylib.h>

#define LIMIT 25

/* The most eficient solution I found was using a static variable for copy()
 * the problem with this is that I have to make a special function just for this*/

main(){
    int len, min=10;
    char line[LIMIT], longest[LIMIT];

    while((len=getline(line,LIMIT)) > 0)
            if(len>=min)
                concat(longest, line);

    printf("\n%s\n", longest);

    return 0;
}
