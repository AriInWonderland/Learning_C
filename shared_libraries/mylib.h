/* This file includes custom libraries I use for the stuff that I do in C.*/
/* This function prints the s char, x times, so it can be easily used to make 
 * cute outputs without making the code an unreadible mess.*/
int repeater(char s, int x){
	int i;
	
	printf("*");
	for(i=1;i < x; i++)
		printf("%c", s);
	printf("*");

	printf("\n");
}
/* The for() loop begins with i=1 and goes until i < x instead of going from i=0 to i<=x because I wanted to 
 * have the little starts without printing more digits than the ones you specify when calling the function.*/
	
