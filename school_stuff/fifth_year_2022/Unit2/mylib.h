void renglones(int x){
    int i;
    for(i=0; i<x; i++)
        printf("\n");
}

void guiones(int i){
    int x;  
 
    for(x = 0; x < i; x++)
        printf("_"); 
    printf("\n");
}

void saludo(){
    printf("Hola. Esto es una funcion.\n");
}

float promedio(float t, int n){
    return(t/n);
}

int suma(int a, int b){
    return(a+b);
}
