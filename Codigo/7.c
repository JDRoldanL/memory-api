/*
Ahora pase un funny value para liberar (e.g. un puntero en la mitad del array que usted ha asignado) 
¿Qué pasa?, ¿Ústed necesita herramientas para encontrar este tipo de problemas?
*/
#include <stdlib.h>
#include <stdio.h>

int main(){
    int *data = (int*)malloc(100*sizeof(int));
    for (int i = 0; i < 100; i++){
        *(data + i) = i;
    }
    int *p = &data[2];
    printf("p = %d\n", *p);
    free(p);
    printf("p = %d\n", *p);
    printf("Data = %d\n", data[1]);
    return 0;
}