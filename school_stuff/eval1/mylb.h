/* Repite el caracter r una cantidad i de veces con un asterisco al principio y al final*/
void repeater(int i, char r){
    int x;  
  
    printf("*");
    for(x = 0; x < i; x++)
        printf("%c", r); 
    printf("*");

}
