/*
Codifique un programa que asigne un array de enteros (como arriba), luego lo libere,
y entonces intente imprimir el valor de un elemento del array. 
¿El programa corre?, ¿Que pasa cuando hace uso de valgrind?
*/
#include <stdlib.h>
#include <stdio.h>

int main(){
    int *data = (int*)malloc(100*sizeof(int));
    for (int i = 0; i < 100; i++){
        *(data + i) = i;
    }
    free(data);
    printf("Data = %d\n", data[1]);
    return 0; 
}