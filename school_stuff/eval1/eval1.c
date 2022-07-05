/* Consigna:
 * Una biblioteca realiza las compras mensuales de nuevos materiales de acuerdo a los siguientes porcentajes:
 * Libros de Interés General 50%
 * Libros de Tecnología 30%
 * Libros de Ciencias Sociales 20%
 * Hacer un programa para ingresar el importe total (en pesos) que la biblioteca destinará a la compra mensual y luego calcular e informar el importe que invertirá en cada tipo de libro.
 */

#include <stdio.h>
#include "mylb.h"

int main(){
    float inpt, pig, pit, pcs;
    float ig, it, cs;
    char yn, yn1;


    printf("\n");
    repeater(58,'-');
    printf("\n| Este programa calcula el importe que se destinara a cada |\n| categoria de libros dependiendo su tipo.\t\t\t    |\n");
    repeater(58,'-');

    printf("\n\n");

    repeater(37,'-');
    printf("\n| Los valores predeterminados son:    |\n| Libros de Interes General,\t\t50 |\n| Libros de Tecnologia,\t\t\t30 |\n| Libros de Ciencias Sociales,\t20 |\n");
    repeater(37,'-');

    printf("\n\n"); 

    repeater(50,'-');
    printf("\n| Desea cambiar los valores predeterminados? (Y/N) |\n");
    printf("| \t\t\t\t\t\t\t\t\t\t |\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b"); 
    scanf("%c", &yn);


    if(yn == 'Y' || yn == 'y'){
        repeater(50, '-');
        printf("\n\n");
        repeater(36, '-');
        printf("\n| Ingrese el porcentaje destinado a: |\n");
       
       printf("| Libros de Interes General:  \t  |\b\b\b\b\b\b");
        scanf("%f", &ig);
        
        printf("| Libros de Tecnologia: \t\t\t  |\b\b\b\b\b\b");
        scanf("%f", &it);
        
        printf("| Libros de Ciencias Sociales:  \t  |\b\b\b\b\b\b");
        scanf("%f", &cs);
        repeater(36, '-');
    }
    else{
        repeater(50,'-');
        ig = 50.00;
        it = 30.00;
        cs = 20.00;
    }


    printf("\n\n");
    repeater(49,'-');
    printf("\n| Ingrese el importe (o presupuesto) total:\t\t|\b\b\b\b\b\b\b");
    scanf("%f", &inpt);
    printf("| Presupuesto total: %3.2f\t\t\t\t\t|\n", inpt);
    repeater(49,'-');
    printf("\n\n");


    pig = ig * inpt / 100.00;
    pit = it * inpt / 100.00;
    pcs = cs * inpt / 100.00;

    
    printf("\t\t");repeater(29,'-');printf("\n");
    printf("\t\t| Destino:\t\tImporte:\t|\n\t\t| Interes general\t\t%.2f |\n\t\t| Tecnologia\t\t\t%.2f |\n\t\t| Ciencias Sociales\t\t%.2f |\n", pig, pit, pcs);
    printf("\t\t");repeater(29,'-');printf("\n\n");
}
