/*
Ejercicio 23.
Hacer un histograma de las vocales de un texto, es decir, indicar cuántas veces
aparece cada vocal en ese texto. Se leerá una cadena de caracteres (de tamaño
máximo fijado) y se mostrará el número de veces que aparece cada vocal en él.
El programa deberá asegurarse de que el número de caracteres leídos no excede
el espacio disponible.
*/

#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

int main()
{
    char text[MAX_SIZE];
    int a = 0, e = 0, i = 0, o = 0, u = 0;

    printf("Ingrese una cadena de caracteres (máximo %d caracteres):\n", MAX_SIZE);
    fgets(text, MAX_SIZE, stdin);

    int length = strlen(text);

    for (int j = 0; j < length; j++)
    {
        switch (text[j])
        {
        case 'a':
        case 'A':
            a++;
            break;
        case 'e':
        case 'E':
            e++;
            break;
        case 'i':
        case 'I':
            i++;
            break;
        case 'o':
        case 'O':
            o++;
            break;
        case 'u':
        case 'U':
            u++;
            break;
        }
    }

    printf("Número de veces que aparece cada vocal:\n");
    printf("A: %d\n", a);
    printf("E: %d\n", e);
    printf("I: %d\n", i);
    printf("O: %d\n", o);
    printf("U: %d\n", u);

    return 0;
}
