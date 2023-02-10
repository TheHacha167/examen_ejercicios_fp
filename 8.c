/*
Realiza un programa en C que lea una cadena de caracteres (con un tamaño máximo 
fijado por el programa) y muestre por pantalla el resultado de cambiar las letras minúsculas en mayúsculas y viceversa. 
Si hay otros caracteres que no sean letras, deben salir intactos.
*/

#include <stdio.h>
#include <string.h>

#define MAX 100

void changeCase(char str[]) {
  for (int i = 0; i < strlen(str); i++) {
    if (str[i] >= 'a' && str[i] <= 'z') {
      str[i] = str[i] - 32;
    } else if (str[i] >= 'A' && str[i] <= 'Z') {
      str[i] = str[i] + 32;
    }
  }
}

int main() {
  char str[MAX];
  printf("Ingrese una cadena de caracteres: ");
  fgets(str, MAX, stdin);

  changeCase(str);

  printf("Cadena convertida: %s\n", str);
  return 0;
}
