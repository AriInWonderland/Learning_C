#include <stdio.h>
#include "mylib.h"
    
main(){
    int n1, n2;
    float s, prom;

    printf("Ingrese dos enterios separados por un espacio: ");
    scanf("%d%d", &n1, &n2);
    s = suma(n1,n2);
    prom = promedio(s,2);

    printf("La suma es %.0f\n", s);
    printf("El promedio es %.2f\n", prom);

    return 0;
}
    
