/*
Escriba un programa sencillo que asigne memoria usando malloc() pero olvide liberarla antes de que el programa termina.
¿Qué pasa cuando este programa se ejecuta?, ¿Puede usted usar gdb para encontrar problemas como este?,
¿Que dice acerca de Valgrind (de nuevo use este con la bandera --leak check=yes)?
*/

#include <stdlib.h>

int main(){
    int *p = malloc(3*sizeof(int));
    for(int i = 0; i < 3; i++) {
        *(p + i) = i;
    }
    return 0;
}

