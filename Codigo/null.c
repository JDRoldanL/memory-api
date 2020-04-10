/*
Escriba un programa simple llamado null.c que cree un puntero a un entero, llevelo a null y 
entonces intente desreferenciarlo (esto es, asignarle un valor). Compile este programa llamado null. 
¿Qué pasa cuando usted ejecuta este programa?
*/
#include <stdio.h>

int main(){
    int *p;
    p = NULL;
    *p = 4; 
    return 0;
}