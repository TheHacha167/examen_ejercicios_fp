/*
Crear un programa que lea de teclado una lista de números.
Para ello, primero indicará al usuario el tamaño máximo de la
lista y averiguará de él la cantidad de números que el usuario
quiere introducir. A continuación, leerá la lista. Una vez leída,
el programa mostrará por pantalla otra lista donde el elemento en
la posición i es el promedio de los elementos desde la primera posición
hasta la i-ésima en la lista original.*/
#include <stdio.h>
#define MAX_longitud 100

int main()
{
    int numeros[MAX_longitud];
    int longitud, i;

    printf("introduce la longitud maxima (hasta %d): ", MAX_longitud);
    scanf("%d", &longitud);

    printf("introduce el numero de elementos: ");
    scanf("%d", &longitud);

    printf("introduce la lista de numeros:\n");
    for (i = 0; i < longitud; i++)
    {
        scanf("%d", &numeros[i]);
    }

    printf("la lista de es:\n");
    int sum = 0;
    for (i = 0; i < longitud; i++)
    {
        sum += numeros[i];
        printf("%.2f\n", (float)sum / (i + 1));
    }

    return 0;
}
