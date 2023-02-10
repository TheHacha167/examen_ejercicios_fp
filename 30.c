/*


Imprimir el primer carácter de cada palabra que exista en una cadena de caracteres de tamaño máximo fijado.
 El programa ha de comprobar, en primer lugar, que el texto contiene únicamente letras, espacios en blanco y signos 
 de puntuación (se consideran signos de puntuación válidos la coma, el punto y coma, el punto y los dos puntos) y, si no es así,
  debe terminar de inmediato dando un error. Si la cadena es correcta, el programa imprimirá en la línea siguiente el primer carácter 
  de cada palabra, separándolos entre sí por un espacio.


*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 100

int main() {
  char str[MAX_LENGTH];
  int i, length, valid = 1;

  printf("Ingrese la cadena: ");
  fgets(str, MAX_LENGTH, stdin);
  length = strlen(str);

  // Verificar si la cadena contiene únicamente letras, espacios y signos de puntuación
  for (i = 0; i < length; i++) {
    if (!isalpha(str[i]) && !isspace(str[i]) && str[i] != ',' && str[i] != ';' && str[i] != '.' && str[i] != ':') {
      valid = 0;
      break;
    }
  }

  if (!valid) {
    printf("Error: la cadena contiene caracteres no válidos\n");
    return 1;
  }

  printf("Los primeros caracteres de cada palabra son: ");
  for (i = 0; i < length; i++) {
    if (isalpha(str[i]) && (i == 0 || isspace(str[i - 1]))) {
      printf("%c ", str[i]);
    }
  }
  printf("\n");

  return 0;
}
