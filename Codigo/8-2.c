/*
Intente usar alguna de las otras interfaces para asignacion de memoria. Por ejemplo,
cree una estructura de datos simple similar a un vector y que use rutinas que usen realloc para manejar el vector.
Use un array para almacenar los elementos del vector; cuando un usuario agregue una entrada al vector,
use realloc para asignar un espacio mas a este. ¿Que tan bien funciona el vector asi?, ¿Como se compara con una lista enlazada?,
utilice valgrind para ayudarse en la busqueda de errores.
*/
#include <stdio.h> 
#include <stdlib.h>
#include <unistd.h>

typedef struct nodoSimple{
    int dato;
    struct nodoSimple *siguiente;
}Nodo;

Nodo *ListaSimple(Nodo *nodo){
    nodo = NULL;
    return nodo;
}

void *imprimirLista(Nodo *nodo);
Nodo *agregarNodo(Nodo *nodo, int dato);

int main(){ 
    Nodo *Lista = NULL;
    Lista = ListaSimple(Lista);
    Lista = agregarNodo(Lista, 3);
    Lista = agregarNodo(Lista, 4);
    imprimirLista(Lista);
    printf("Lista = %d, dir = %p\n", Lista->dato, Lista->siguiente);
    return 0; 
}

Nodo *agregarNodo(Nodo *nodo, int dato){
    Nodo *nuevoNodo, *aux;
    nuevoNodo = (Nodo*)malloc(sizeof(Nodo));
    nuevoNodo->dato = dato;
    nuevoNodo->siguiente = NULL;
    if(nodo == NULL){
        nodo = nuevoNodo;
    }else{
        aux = nodo;
        while(aux -> siguiente != NULL){
            aux = aux->siguiente;
        }
        aux->siguiente = nuevoNodo;
    }
    return nodo;
}

void *imprimirLista(Nodo *nodo){
    Nodo *aux;
    aux = nodo;
    while(aux != NULL){
        printf("El dato es: %d, en la direccion: %p\n", aux->dato, aux->siguiente);
        aux = aux->siguiente;
    }
    return NULL;
}