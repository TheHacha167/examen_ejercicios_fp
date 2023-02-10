/*


15. Extraer la diagonal secundaria de una matriz. Se mostrará la matriz original, fila por fila y,
 después, la diagonal secundaria, en una única lista. Las dimensiones máximas de la matriz se fijarán por el programa. 
 El programa debe asegurarse de que el número de elementos no supera el espacio disponible.

*/
#include <stdio.h>

#define MAX_ROWS 10
#define MAX_COLS 10

void leer_matriz(int matriz[][MAX_COLS], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("Introduce el elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void mostrar_matriz(int matriz[][MAX_COLS], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void extraer_diagonal_secundaria(int matriz[][MAX_COLS], int filas, int columnas) {
    printf("La diagonal secundaria es: ");
    for (int i = 0; i < filas; i++) {
        printf("%d ", matriz[i][columnas - i - 1]);
    }
    printf("\n");
}

int main() {
    int filas, columnas;
    int matriz[MAX_ROWS][MAX_COLS];

    printf("Introduce el número de filas de la matriz: ");
    scanf("%d", &filas);
    printf("Introduce el número de columnas de la matriz: ");
    scanf("%d", &columnas);

    leer_matriz(matriz, filas, columnas);
    printf("La matriz introducida es: \n");
    mostrar_matriz(matriz, filas, columnas);
    extraer_diagonal_secundaria(matriz, filas, columnas);

    return 0;
}
