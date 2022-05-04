// 1.3.2 b) 2:

#include <stdio.h>
#include <mylib.h>
#define EQUALS 83

int main(){
	float nota, min;

	printf("\n\t\tEste programa determina si una calificacion esta aprobada o no.\n");
	repeater('=', EQUALS);

	printf("| Cual es la nota minima para aprobar?	");
	scanf("%f", &min);
	repeater('=', EQUALS);

	printf("| Ingrese la calificacion: ");
	scanf("%f", &nota);
	//repeater('=', EQUALS);

	if(nota < 11 && nota > 0)
		if(nota < min)
			printf("| Desaprobado.\n\n");
		else
			printf("| Aprobado.\n\n");
	else
		printf("Por favor recuerde que los numeros validos son entre 0 y 10, no se aceptan porcentajes.\n\n");
	
	return 0;
}
		
