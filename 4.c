/*
Crear un programa que obtenga del usuario una cadena de caracteres (con un
tamaño máximo fijado por el programa) e imprima por pantalla las letras
mayúsculas que encuentre en esa cadena.
*/

#include <stdio.h>

#define MAX 100

int main(void) {
    char str[MAX];
    int i = 0;

    printf("Ingrese una cadena de caracteres (maximo %d caracteres): ", MAX-1);
    fgets(str, MAX, stdin);

    printf("Las letras mayusculas en la cadena son:\n");
    while (str[i]) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            printf("%c ", str[i]);
        }
        i++;
    }
    printf("\n");

    return 0;
}
