/*
Haz un programa en C que obtenga del usuario una cadena de caracteres (con un tamaño máximo fijado por el programa) y dos caracteres,
y muestre por pantalla la misma cadena pero agregando el segundo carácter solicitado a continuación del primero allí donde este aparezca.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LONGITUD 1000

int main() {
    char cadena[MAX_LONGITUD], caracter1, caracter2, resultado[MAX_LONGITUD];
    int i, j = 0;
    
    printf("Introduce la cadena de caracteres: ");
    scanf("%s", cadena);
    printf("Introduce el primer caracter a buscar: ");
    scanf(" %c", &caracter1);
    printf("Introduce el segundo caracter a agregar: ");
    scanf(" %c", &caracter2);
    
    if (strlen(cadena) > MAX_LONGITUD - 1) {
        printf("La longitud maxima permitida es %d.\n", MAX_LONGITUD - 1);
        exit(1);
    }
    
    for (i = 0; i < strlen(cadena); i++) {
        resultado[j] = cadena[i];
        j++;
        if (cadena[i] == caracter1) {
            resultado[j] = caracter2;
            j++;
        }
    }
    resultado[j] = '\0';
    
    printf("\nLa cadena con el segundo caracter agregado es: %s\n", resultado);
    
    return 0;
}