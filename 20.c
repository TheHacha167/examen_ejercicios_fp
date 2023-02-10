/*
Crear un programa que obtenga del usuario una cadena de caracteres (de longitud máxima fijada)
y sustituya en ella la vocal más frecuente en ella por la menos frecuente en ella
(si hay varias que son la menos frecuente, se elegirá una de ellas de forma arbitraria).
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_longitud 100

int obtener_frecuencia(char *str, char c)
{
    int cuenta = 0;
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (tolower(str[i]) == tolower(c))
        {
            cuenta++;
        }
    }
    return cuenta;
}

char vocal_mas_comun(char *str)
{
    char vocales[] = {'a', 'e', 'i', 'o', 'u'};
    int len = strlen(str);
    int frecuencia[5] = {0};
    int max_index = 0;
    for (int i = 0; i < 5; i++)
    {
        frecuencia[i] = obtener_frecuencia(str, vocales[i]);
        if (frecuencia[i] > frecuencia[max_index])
        {
            max_index = i;
        }
    }
    return vocales[max_index];
}

char get_vocal_menos_frecuente(char *str)
{
    char vocales[] = {'a', 'e', 'i', 'o', 'u'};
    int len = strlen(str);
    int frecuencia[5] = {0};
    int min_index = 0;
    for (int i = 0; i < 5; i++)
    {
        frecuencia[i] = obtener_frecuencia(str, vocales[i]);
        if (frecuencia[i] < frecuencia[min_index])
        {
            min_index = i;
        }
    }
    return vocales[min_index];
}

void reemplazar_vocal(char *str, char old_vowel, char new_vowel)
{
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (tolower(str[i]) == tolower(old_vowel))
        {
            str[i] = new_vowel;
        }
    }
}

int main()
{
    char str[MAX_longitud];
    printf("introduce una frase: ");
    fgets(str, MAX_longitud, stdin);

    printf("la original es: %s", str);
    char vocal_mas_frecuente = vocal_mas_comun(str);
    char vocal_menos_frecuente = get_vocal_menos_frecuente(str);
    replace_vowel(str, vocal_mas_frecuente, vocal_menos_frecuente);
    printf("con las vocales cambiadas: %s", str);

    return 0;
}
