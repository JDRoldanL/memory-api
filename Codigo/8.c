/*
Intente usar alguna de las otras interfaces para asignacion de memoria. Por ejemplo,
cree una estructura de datos simple similar a un vector y que use rutinas que usen realloc para manejar el vector.
Use un array para almacenar los elementos del vector; cuando un usuario agregue una entrada al vector,
use realloc para asignar un espacio mas a este. ¿Que tan bien funciona el vector asi?, ¿Como se compara con una lista enlazada?,
utilice valgrind para ayudarse en la busqueda de errores.
*/
#include <stdio.h> 
#include <stdlib.h> 

int *nuevoDato(int datoAInsertar, int *p);
int main(){ 
    int *ptr = (int *)malloc(sizeof(int)*2);
    //Se inicializa el vector
    *ptr = 10;  
    *(ptr + 1) = 20; 
    int datoAInsertar;
    //se hace uso para insertar nuevo dato
    printf("tamaño vector = %d\n", (int)sizeof(ptr)/4);
    //ptr = (int *)realloc(ptr, sizeof(int)*3);
    printf("Ingrese un numero para insertar\n");
    scanf("%d", &datoAInsertar);
    ptr = nuevoDato(datoAInsertar, ptr);
    //Se muestran los datos
    for(int i = 0; i < 3; i++){
        printf("%d ", *(ptr + i));
    } 
    return 0; 
}

int *nuevoDato(int datoAInsertar, int *p){
    p = (int *)realloc(p, sizeof(int) * ((sizeof(p)/4) + 1));
    *(p + (sizeof(p)/4)) = datoAInsertar;
    return p;
}
