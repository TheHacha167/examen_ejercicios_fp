/*
Calcular la suma de dos matrices. Las matrices tendrán unas dimensiones máximas
fijadas por el programa. El programa solicitará al usuario las dimensiones de las matrices,
 comprobará que no superan los límites fijados y mostrará la matriz resultado fila por fila.

*/
#include <stdio.h>

#define MAX_filas 10
#define MAX_columnas 10

int main()
{
    int filas, columnas;

    printf("numero de filas (1 - %d): ", MAX_filas);
    scanf("%d", &filas);
    if (filas > MAX_filas)
    {
        printf("excede el maximo de filas %d\n", MAX_filas);
        return 1;
    }

    printf("numero de columnas (1 - %d): ", MAX_columnas);
    scanf("%d", &columnas);
    if (columnas > MAX_columnas)
    {
        printf("el numero de xolumnas excede %d\n", MAX_columnas);
        return 1;
    }

    int matriz1[filas][columnas];
    int matriz2[filas][columnas];
    int result[filas][columnas];

    int i, j;
    printf("introduce los elemntos de la matriz 1:\n");
    for (i = 0; i < filas; i++)
    {
        for (j = 0; j < columnas; j++)
        {
            printf("introduce el elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("introduce el elementos de la matriz 2:\n");
    for (i = 0; i < filas; i++)
    {
        for (j = 0; j < columnas; j++)
        {
            printf("introduce el elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz2[i][j]);
        }
    }

    printf("\nla suma de ambas es:\n");
    for (i = 0; i < filas; i++)
    {
        for (j = 0; j < columnas; j++)
        {
            result[i][j] = matriz1[i][j] + matriz2[i][j];
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}