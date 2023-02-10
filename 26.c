/*
Ejercicio 26.
Llevar un histograma de resultados del evento “tirar dos dado”. Un histograma es
una lista que cuenta, para cada elemento, el número de veces que ha salido ese
resultado. Por ejemplo, la lista (el histograma): 5,3,7,2,6,1 indicaría que el 1 ha
salido cinco veces, el 2 tres veces, el 3 siete veces, y así sucesivamente. Para ello,
utilizar la función random y asociadas, presente en la biblioteca stdlib.h
*/
#include <stdio.h>
#include <stdlib.h>

#define N_LANCES 100000
#define N_POSIBLES_VALORES 11

int main()
{
    int i, dado1, dado2, resultado;
    int histograma[N_POSIBLES_VALORES];

    // Inicializa el histograma a 0
    for (i = 0; i < N_POSIBLES_VALORES; i++)
    {
        histograma[i] = 0;
    }

    // Lleva a cabo N_LANCES de tiro de dos dados
    for (i = 0; i < N_LANCES; i++)
    {
        dado1 = rand() % 6 + 1;
        dado2 = rand() % 6 + 1;
        resultado = dado1 + dado2;
        histograma[resultado - 2]++;
    }

    // Imprime el histograma
    for (i = 0; i < N_POSIBLES_VALORES; i++)
    {
        printf("%d ha salido %d veces\n", i + 2, histograma[i]);
    }

    return 0;
}
