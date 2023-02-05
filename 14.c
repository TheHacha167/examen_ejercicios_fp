/*
Realizar el sumatorio de 1/n² desde n = 1 hasta el máximo que el usuario
 especifique por teclado. El programa pedirá al usuario el valor máximo de n y
  dará como salida la suma total de los valores 1/1² + 1/2² + 1/3² + ... + 1/n².
  Nota: Las matemáticas nos dicen que, si n es suficientemente alto, ese valor se aproxima a π²/6 (≈ 1,64493).
*/
#include <stdio.h>

int main()
{
    int n;
    float sum = 0.0f;

    printf("introduce el valor de n: ");
    scanf("%d", &n);

    int i;
    for (i = 1; i <= n; i++)
    {
        sum += 1.0f / (i * i);
    }

    printf("la suma de 1/1^2 + 1/2^2 + ... + 1/%d^2 es: %.6f\n", n, sum);

    return 0;
}
