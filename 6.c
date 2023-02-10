/*
Haz un programa en C que calcule el producto escalar de dos vectores. Los vectores tendrán un número de elementos especificado por el usuario 
(con un máximo fijado por el programa) y obtendrá los elementos de los vectores del usuario.
*/
#include <stdio.h>
#include <stdlib.h>

#define MAX_ELEMENTOS 100

int main() {
    int num_elementos, i;
    double vector1[MAX_ELEMENTOS], vector2[MAX_ELEMENTOS], producto_escalar = 0.0;
    
    printf("Introduce el numero de elementos de los vectores (maximo %d): ", MAX_ELEMENTOS);
    scanf("%d", &num_elementos);
    
    if (num_elementos > MAX_ELEMENTOS) {
        printf("El numero maximo de elementos permitidos es %d.\n", MAX_ELEMENTOS);
        exit(1);
    }
    
    printf("Introduce los elementos del primer vector:\n");
    for (i = 0; i < num_elementos; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%lf", &vector1[i]);
    }
    
    printf("Introduce los elementos del segundo vector:\n");
    for (i = 0; i < num_elementos; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%lf", &vector2[i]);
    }
    
    for (i = 0; i < num_elementos; i++) {
        producto_escalar += vector1[i] * vector2[i];
    }
    
    printf("\nEl producto escalar de los vectores es: %.2f\n", producto_escalar);
    
    return 0;
}
