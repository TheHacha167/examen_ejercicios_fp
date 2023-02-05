/*
indique si son primos entre sí. Nota: dos números son primos entre sí si
 no comparten ningún divisor, es decir, si su máximo común divisor es 1.
 Por ejemplo, 12 y 5 lo son, mientras que 10 y 6 no lo son.
*/
#include <stdio.h>

int gcd(int a, int b)
{
    int r;
    while (b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main()
{
    int a, b;

    printf("introduce dos numeros: ");
    scanf("%d%d", &a, &b);

    if (gcd(a, b) == 1)
    {
        printf("%d y %d son coprimos.\n", a, b);
    }
    else
    {
        printf("%d y %d no son coprimos.\n", a, b);
    }

    return 0;
}
