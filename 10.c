/*
Crear un programa que obtenga del usuario dos vectores de enteros de igual
longitud (pero con una longitud máxima fijada por el programa) y calcule la suma
de ambos, rotando el primero un número de posiciones hacia la derecha que
indique el usuario. Cada rotación implica que la componente de índice i pasa a
ocupar índice i + 1; y que la componente de índice máximo pasa al índice mínimo.
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_LONGITUD 1000

void rotarDerecha(int vector[], int longitud, int rotaciones) {
    int i, j, aux;
    for (i = 0; i < rotaciones; i++) {
        aux = vector[longitud - 1];
        for (j = longitud - 1; j > 0; j--) {
            vector[j] = vector[j - 1];
        }
        vector[0] = aux;
    }
}

int main() {
    int vector1[MAX_LONGITUD], vector2[MAX_LONGITUD], suma[MAX_LONGITUD];
    int i, longitud, rotaciones;
    
    printf("Introduce la longitud de los vectores: ");
    scanf("%d", &longitud);
    
    if (longitud > MAX_LONGITUD) {
        printf("La longitud máxima permitida es %d.\n", MAX_LONGITUD);
        exit(1);
    }
    
    printf("Introduce las componentes del primer vector:\n");
    for (i = 0; i < longitud; i++) {
        scanf("%d", &vector1[i]);
    }
    
    printf("Introduce las componentes del segundo vector:\n");
    for (i = 0; i < longitud; i++) {
        scanf("%d", &vector2[i]);
    }
    
    printf("Introduce el número de rotaciones hacia la derecha para el primer vector: ");
    scanf("%d", &rotaciones);
    
    rotarDerecha(vector1, longitud, rotaciones);
    
    for (i = 0; i < longitud; i++) {
        suma[i] = vector1[i] + vector2[i];
    }
    
    printf("\nEl resultado de la suma de los vectores rotados es:\n");
    for (i = 0; i < longitud; i++) {
        printf("%d ", suma[i]);
    }
    printf("\n");
    
    return 0;
}
