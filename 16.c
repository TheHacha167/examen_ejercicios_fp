/*
1. Evaluar un polinomio de grado arbitrario en un punto x0 especificado
por el usuario. Los coeficientes y el grado del polinomio también serán
especificados por el usuario.
*/
#include <stdio.h>
#include <math.h>

int main()
{
    int grado;
    float x0, resultado = 0.0f;

    printf("introduce el grado: ");
    scanf("%d", &grado);

    float coeficiente[grado + 1];

    int i;
    for (i = grado; i >= 0; i--)
    {
        printf("valor de x^%d: ", i);
        scanf("%f", &coeficiente[i]);
    }

    printf("valor de x0: ");
    scanf("%f", &x0);

    for (i = grado; i >= 0; i--)
    {
        resultado += coeficiente[i] * pow(x0, i);
    }

    printf("el valor del polinomio  x0 = %.2f es: %.2f\n", x0, resultado);

    return 0;
}
