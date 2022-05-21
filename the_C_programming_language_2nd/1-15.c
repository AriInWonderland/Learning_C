/*Rewrite the temperature conversion program of section 1.2 to use a function for conversion.*/

/*The function asks for a limit (upper in the section 1.2 ver.) and the numbers to add at each
 * step (step = 20 in the section 1.2 ver.) to print a celsius to fahr table.*/
#include <stdio.h>

void ctoft(int lim, int step){
    float fahr, celsius;
    fahr = celsius = 0;

    while(fahr <= lim) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}

main(){
    ctoft(300,20);
}
