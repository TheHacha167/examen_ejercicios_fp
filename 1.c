/*Crear un programa que obtenga del usuario una cadena de caracteres (con un tamaño máximo fijado por el programa) e imprima por pantalla la misma cadena,
pero al revés, es decir, empezando desde el último carácter y acabando con el primero.
*/
#include <stdio.h>
#include <string.h>

#define MAX_longitud 100

int main() {
    char str[MAX_longitud];
    int i, longitud;

    printf("Ingrese una cadena (mximo %d caracteres): ", MAX_longitud - 1);
    fgets(str, MAX_longitud, stdin);
    longitud = strlen(str) - 1;  

    printf("La cadena invertida es: ");
    for (i = longitud - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}