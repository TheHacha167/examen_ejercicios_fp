/*
Tomando como entrada una cadena de texto (de longitud máxima fijada),
eliminar las consonantes y mostrar ambas cadenas: la original y la cadena con las consonantes eliminadas.
*/
#include <stdio.h>
#include <string.h>

#define MAX_longitud 100

int es_vocal(char c)
{
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
           c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}

int main()
{
    char string_inicial[MAX_longitud];
    char string_nuevo[MAX_longitud];
    int i, j = 0;

    printf("Enter a string (maximum length %d): ", MAX_longitud);
    fgets(string_inicial, MAX_longitud, stdin);

    for (i = 0; i < strlen(string_inicial); i++)
    {
        if (!es_vocal(string_inicial[i]))
        {
            string_nuevo[j] = string_inicial[i];
            j++;
        }
    }
    string_nuevo[j] = '\0';

    printf("el original era: %s", string_inicial);
    printf("el sin vocales es: %s", string_nuevo);

    return 0;
}
