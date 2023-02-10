/*Ejercicio 22
Mostrar una lista con los números primos que
se encuentran entre dos números dados.
*/
#include <stdio.h>
#include <stdbool.h>

bool esPrimo(int num)
{
    if (num <= 1)
        return false;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int num1, num2;
    printf("Ingrese dos números: ");
    scanf("%d %d", &num1, &num2);
    printf("Los números primos entre %d y %d son: \n", num1, num2);
    for (int i = num1; i <= num2; i++)
    {
        if (esPrimo(i))
            printf("%d\n", i);
    }
    return 0;
}
