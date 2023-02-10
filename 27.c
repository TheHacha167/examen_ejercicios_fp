/*
Dibujar en pantalla una pirámide construida con el carácter ‘*’. El programa leerá, en primer lugar,
los pisos que tiene la pirámide, y la mostrará centrada sobre su base. Ejemplo: 4 pisos:
*
***
*****
*******

*/
#include <stdio.h>

void dibujar_piramide(int pisos)
{
    for (int i = 0; i < pisos; i++)
    {
        for (int j = 0; j < pisos - i - 1; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int num_pisos;
    printf("de cuentos pisos: ");
    scanf("%d", &num_pisos);
    dibujar_piramide(num_pisos);
    return 0;
}
