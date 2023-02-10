/*
Realizar un programa en C que pida al usuario dos cadenas de caracteres (con
tamaños máximos fijados por el programa) y las imprima por pantalla
‘mezcladas’, es decir, sacando alternativamente un carácter de cada una de ellas.
Los caracteres que le sobren a la más larga se imprimirán al final. Por ejemplo,
supongamos que las cadenas introducidas por el usuario han sido: tigresa y PATO.
El programa debería sacar por pantalla la siguiente cadena: tPiAgTrOesa
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LONGITUD 1000

int main() {
    char cadena1[MAX_LONGITUD], cadena2[MAX_LONGITUD], resultado[MAX_LONGITUD];
    int i, j, k;
    
    printf("Introduce la primera cadena de caracteres: ");
    scanf("%s", cadena1);
    
    printf("Introduce la segunda cadena de caracteres: ");
    scanf("%s", cadena2);
    
    if (strlen(cadena1) > MAX_LONGITUD - 1 || strlen(cadena2) > MAX_LONGITUD - 1) {
        printf("La longitud máxima permitida es %d.\n", MAX_LONGITUD - 1);
        exit(1);
    }
    
    i = j = k = 0;
    while (cadena1[i] != '\0' && cadena2[j] != '\0') {
        resultado[k++] = cadena1[i++];
        resultado[k++] = cadena2[j++];
    }
    
    while (cadena1[i] != '\0') {
        resultado[k++] = cadena1[i++];
    }
    
    while (cadena2[j] != '\0') {
        resultado[k++] = cadena2[j++];
    }
    
    resultado[k] = '\0';
    
    printf("\nLa cadena mezclada es: %s\n", resultado);
    
    return 0;
}