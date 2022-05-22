/* 1-19 A function which reverses a chararcter string, a program that reverses
 * its input one line at a time*/
#include <stdio.h>
#include <mylib.h>

#define LIMIT 100

main(){
    int len;
    char line[LIMIT],rs[LIMIT];

    while((len=getline(line,LIMIT))>0){
        reverse(line);
        printf("%s\n",line);
    }
}
