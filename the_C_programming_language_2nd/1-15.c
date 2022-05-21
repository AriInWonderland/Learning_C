/*Rewrite the temperature conversion program of section 1.2 to use a function for conversion.*/

/*The function asks for a limit (upper in the section 1.2 ver.) and the numbers to add at each
 * step (step = 20 in the section 1.2 ver.) to print a celsius to fahr table.*/
#include <stdio.h>
#include <mylib.h>

#define REPEAT '-'
#define NTIMES 54

void ctoft(int lim, int step){
    float fahr, celsius;
    fahr = celsius = 0;

    while(fahr <= lim) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("|\t\t\t\t%4.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}

main(){
    int lmt, stps;
    repeater(REPEAT, NTIMES);
    printf("| This program will output a celsius|fahrenheit table.\n| Please choose a maximum number: ");
    scanf("%d", &lmt);
    printf("| And how big will the increment be each time: ");
    scanf("%d", &stps);
    repeater(REPEAT, NTIMES);

    ctoft(lmt,stps);
    repeater(REPEAT, NTIMES);
}
