/*
Crear un programa que obtenga del usuario una cadena de caracteres (de longitud máxima fijada)
y sustituya en ella la vocal más frecuente en ella por la menos frecuente en ella
(si hay varias que son la menos frecuente, se elegirá una de ellas de forma arbitraria).
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 100

int get_frequency(char *str, char c)
{
    int count = 0;
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (tolower(str[i]) == tolower(c))
        {
            count++;
        }
    }
    return count;
}

char get_most_frequent_vowel(char *str)
{
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};
    int len = strlen(str);
    int frequency[5] = {0};
    int max_index = 0;
    for (int i = 0; i < 5; i++)
    {
        frequency[i] = get_frequency(str, vowels[i]);
        if (frequency[i] > frequency[max_index])
        {
            max_index = i;
        }
    }
    return vowels[max_index];
}

char get_least_frequent_vowel(char *str)
{
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};
    int len = strlen(str);
    int frequency[5] = {0};
    int min_index = 0;
    for (int i = 0; i < 5; i++)
    {
        frequency[i] = get_frequency(str, vowels[i]);
        if (frequency[i] < frequency[min_index])
        {
            min_index = i;
        }
    }
    return vowels[min_index];
}

void replace_vowel(char *str, char old_vowel, char new_vowel)
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
    char str[MAX_LENGTH];
    printf("Enter a string: ");
    fgets(str, MAX_LENGTH, stdin);

    printf("Original string: %s", str);
    char most_frequent_vowel = get_most_frequent_vowel(str);
    char least_frequent_vowel = get_least_frequent_vowel(str);
    replace_vowel(str, most_frequent_vowel, least_frequent_vowel);
    printf("String with vowels replaced: %s", str);

    return 0;
}
