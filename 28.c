/*


Visualizar un entero en binario codificado en ASCII (Ver nota (**)). Se visualizarán tanto el entero
leído como el resultado de su conversión. Nota: la función printf no dispone de esa conversión.

*/

#include <stdio.h>
#include <string.h>

void entero_a_binario(int numero, char numero_binario_string[])
{
    int i;
    for (i = 31; i >= 0; i--)
    {
        numero_binario_string[i] = (numero & 1) ? '1' : '0';
        numero >>= 1;
    }
    numero_binario_string[32] = '\0';
}

int main()
{
    int numero;
    char numero_binario_string[33];

    printf("introduce un entero: ");
    scanf("%d", &numero);

    printf("el numero es: %d\n", numero);

    entero_a_binario(numero, numero_binario_string);
    printf("en binario es: %s\n", numero_binario_string);

    return 0;
}
