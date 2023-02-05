/*El programa obtendrá del usuario una lista de números de longitud arbitraria
(pero con una longitud máxima fijada por el programa) y, a continuación, de cada
grupo de tres números, intercambiará las posiciones del primero y el tercero, mostrando
el resultado por pantalla. Si el último grupo no estuviera completo, lo completará con ceros.*/
#include <stdio.h>
#define MAX_longitud 100

int main()
{
    int numero[MAX_longitud];
    int longitud, i;

    printf("introduce la longitud (hasta %d): ", MAX_longitud);
    scanf("%d", &longitud);

    printf("introduce la lista:\n");
    for (i = 0; i < longitud; i++)
    {
        scanf("%d", &numero[i]);
    }

    printf("la lista modificada es:\n");
    for (i = 0; i < longitud - 2; i += 3)
    {
        int temp = numero[i];
        numero[i] = numero[i + 2];
        numero[i + 2] = temp;
        printf("%d %d %d\n", numero[i], numero[i + 1], numero[i + 2]);
    }

    if (longitud % 3 != 0)
    {
        for (i = longitud - longitud % 3; i < longitud; i++)
        {
            printf("%d ", numero[i]);
        }
        for (i = 0; i < 3 - longitud % 3; i++)
        {
            printf("0 ");
        }
        printf("\n");
    }

    return 0;
}
