/*Ejercicio 21. Dados una matriz y un vector, calcular el vector que se obtiene al multiplicar la
matriz por el vector. Mostrar únicamente el vector resultado. Las dimensiones
máximas de la matriz y del vector se fijarán por programa. El programa debe
asegurarse de que el número de elementos no supera el espacio disponible.
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_FILAS 5
#define MAX_COLUMNAS 5

void leerMatriz(int matriz[][MAX_COLUMNAS], int filas, int columnas)
{
    int i, j;
    for (i = 0; i < filas; i++)
    {
        for (j = 0; j < columnas; j++)
        {
            printf("Introduce el elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void leerVector(int vector[], int tamanio)
{
    int i;
    for (i = 0; i < tamanio; i++)
    {
        printf("Introduce el elemento [%d]: ", i + 1);
        scanf("%d", &vector[i]);
    }
}

void multiplicarMatrizVector(int matriz[][MAX_COLUMNAS], int vector[], int resultado[], int filas, int columnas)
{
    int i, j;
    for (i = 0; i < filas; i++)
    {
        resultado[i] = 0;
        for (j = 0; j < columnas; j++)
        {
            resultado[i] += matriz[i][j] * vector[j];
        }
    }
}

void imprimirVector(int vector[], int tamanio)
{
    int i;
    printf("El vector resultante es: [ ");
    for (i = 0; i < tamanio; i++)
    {
        printf("%d ", vector[i]);
    }
    printf("]\n");
}

int main()
{
    int matriz[MAX_FILAS][MAX_COLUMNAS];
    int vector[MAX_FILAS];
    int resultado[MAX_FILAS];
    int filas, columnas;

    printf("Introduce el número de filas de la matriz: ");
    scanf("%d", &filas);
    if (filas > MAX_FILAS)
    {
        printf("El número de filas no puede superar %d\n", MAX_FILAS);
        return 1;
    }

    printf("Introduce el número de columnas de la matriz: ");
    scanf("%d", &columnas);
    if (columnas > MAX_COLUMNAS)
    {
        printf("El número de columnas no puede superar %d\n", MAX_COLUMNAS);
        return 1;
    }

    leerMatriz(matriz, filas, columnas);
    leerVector(vector, columnas);

    multiplicarMatrizVector(matriz, vector, resultado, filas, columnas);

    imprimirVector(resultado, filas);

    return 0;
}
