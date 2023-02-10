/*
Crear un programa que obtenga del usuario una cadena de caracteres
(con un tamaño máximo fijado por el programa) y un carácter,
y muestre por pantalla la misma cadena eliminando el carácter indicado.
*/

#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

int main(void) {
    char string[MAX_LEN];
    char character;
    int i, j;

    printf("Ingrese una cadena (maximo %d caracteres): ", MAX_LEN - 1);
    fgets(string, MAX_LEN, stdin);

    // Eliminar el carácter '\n' al final de la cadena
    string[strlen(string) - 1] = '\0';

    printf("Ingrese un caracter a eliminar: ");
    scanf("%c", &character);

    // Recorrer la cadena y copiar todos los caracteres a una nueva cadena,
    // excepto aquellos que sean iguales al carácter a eliminar
    char new_string[MAX_LEN];
    for (i = 0, j = 0; i < strlen(string); i++) {
        if (string[i] != character) {
            new_string[j++] = string[i];
        }
    }
    new_string[j] = '\0';

    printf("Cadena sin el caracter '%c': %s\n", character, new_string);

    return 0;
}
