/*
Crear un programa que sume los elementos de la sucesión de Padovan entre
dos posiciones indicadas por el usuario (ambas inclusive). La sucesión de
Padovan p0, p1, p2,... se define como:
• p0 = p1 = p2 = 1;
• pn = pn – 2 + pn – 3.
*/
#include <stdio.h>

int padovan(int n)
{
    if (n == 0 || n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        return padovan(n - 2) + padovan(n - 3);
    }
}

int main()
{
    int start, end;
    int i;
    int sum = 0;

    printf("introduce el inicio y final: ");
    scanf("%d%d", &start, &end);

    for (i = start; i <= end; i++)
    {
        sum += padovan(i);
    }

    printf("la suma de padovan desde %d hasta %d es: %d\n", start, end, sum);

    return 0;
}
