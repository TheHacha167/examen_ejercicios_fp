/*
Extraer la diagonal principal de una matriz. Se mostrará la matriz original,
fila por fila y, después, la diagonal, en una única lista. Las dimensiones máximas de
la matriz se fijarán por el programa. El programa debe asegurarse de que el número de elementos
no supera el espacio disponible.
*/
#include <stdio.h>

#define MAX_filas 10
#define MAX_columnas 10

int main()
{
    int filas, columnas, matriz[MAX_filas][MAX_columnas];
    printf("introduce el numero de filas y columnas (hasta %d): ", MAX_filas);
    scanf("%d%d", &filas, &columnas);

    if (filas > MAX_filas || columnas > MAX_columnas)
    {
        printf("Error: has excedido del maximo de espacio\n");
        return 1;
    }

    printf("introduce los elementos dxe la matriz  matriz:\n");
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("la matriz original es:\n");
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("la diagonal principal es:\n");
    for (int i = 0; i < filas; i++)
    {
        printf("%d ", matriz[i][i]);
    }
    printf("\n");

    return 0;
}
