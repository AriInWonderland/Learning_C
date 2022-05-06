/* Yeah, this is the 1-3 excercise but in the opposite direction.*/

#include <stdio.h>
#include <mylib.h>

#define LOWER   0
#define UPPER   300
#define STEP    20
#define REPEAT  77  

main(){
	float fahr, celsius;
	fahr = UPPER;
	
	printf("\n");
	repeater('=',REPEAT);
	
	printf("|\t\tThis program exemplifies the Celsius to Fahrenheit convertion.\t  |\n");
	
	repeater('=',REPEAT);
	printf("\t\t\t|\tCentigrados\t|\tFahrenheit\t|\n");
	printf("\t\t\t|-------------------|-------------------|\n");


	while(fahr >= LOWER){
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("\t\t\t|\t\t\t %3.0f |\t\t    %6.1f|\n", fahr, celsius);
		fahr = fahr - STEP;
	}
	
	
	repeater('=',REPEAT);
	printf("\n");

	return 0;

}

	
