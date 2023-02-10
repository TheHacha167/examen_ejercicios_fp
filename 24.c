/*
Ejercicio 24
Contar el número de palabras de un texto. Se leerá una cadena de caracteres (de
tamaño máximo fijado) y se mostrará cuántas palabras tiene. El programa ha de
comprobar, en primer lugar, que el texto contiene únicamente letras, espacios
en blanco y signos de puntuación (se consideran signos de puntuación válidos la
coma, el punto y coma, el punto y los dos puntos) y, si no es así, debe terminar
de inmediato dando un error. Si la cadena es correcta, debe devolver el número
de palabras de que consta, teniendo en cuenta que cualquier espacio en blanco
o signo de puntuación separa palabras y que estos separadores podrían estar
repetidos.
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char texto[100]; // Declaración de la cadena de caracteres con tamaño máximo fijado
    int i, contador = 0, palabras = 0;

    printf("Introduce un texto: ");
    fgets(texto, 100, stdin); // Lectura de la cadena de caracteres

    // Comprobación de que el texto contiene únicamente letras, espacios en blanco y signos de puntuación
    for (i = 0; i < strlen(texto); i++)
    {
        if (texto[i] >= 'a' && texto[i] <= 'z')
        { // Letras minúsculas
            contador++;
        }
        else if (texto[i] >= 'A' && texto[i] <= 'Z')
        { // Letras mayúsculas
            contador++;
        }
        else if (texto[i] == ' ' || texto[i] == ',' || texto[i] == ';' || texto[i] == '.' || texto[i] == ':')
        {
            if (contador > 0)
            {
                palabras++;
                contador = 0;
            }
        }
        else
        {
            printf("Error: texto contiene caracteres no válidos\n");
            return 1;
        }
    }
    // Si la cadena termina en una palabra, se debe sumar una más al número de palabras
    if (contador > 0)
    {
        palabras++;
    }

    printf("El texto tiene %d palabra(s)\n", palabras);
    return 0;
}
