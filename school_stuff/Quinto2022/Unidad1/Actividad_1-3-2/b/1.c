#include <stdio.h>
#include <mylib.h>
#define EQUALS 83

int main(){
	int days, i, hrs, res;

	printf("\n\t\tEste programa calcula el total de horas trabajadas.\n");
	repeater('=',EQUALS);

	printf("| Dias trabajados =  ");
	scanf("%d", &days);

	printf("| Horas trabajadas = ");
	scanf("%d", &hrs);

	repeater('=',EQUALS);
	res = hrs * days;
	printf("| En total, usted trabajo %d horas a lo largo de %d dias.\n", res ,days);
	repeater('=',EQUALS);
	printf("\n");

	return 0;
}
