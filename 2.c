/*
Escribir la sucesión de Fibonacci. El programa debe leer dos números enteros de
teclado: el primer dato leído será el número de elementos de la secuencia a
mostrar; el segundo, el elemento de la sucesión a partir del que hay que mostrar,
es decir, a partir de ese elemento, el programa deberá mostrar tantos elementos
de la sucesión como indique el primer número leído. La sucesión de Fibonacci es
n0, n1, ..., ni, ..., y se define como sigue:
n0 = 0;
n1 = 1;
ni = ni – 1 + ni – 2.
*/

#include <stdio.h>

int main() {
  int n, m;
  printf("Introduce el numero de elementos de la secuencia a mostrar: ");
  scanf("%d", &n);
  printf("Introduce el elemento de la sucesion a partir del que hay que mostrar: ");
  scanf("%d", &m);

  int f0 = 0, f1 = 1, fn;
  for (int i = 0; i < m - 2; i++) {
    fn = f0 + f1;
    f0 = f1;
    f1 = fn;
  }

  for (int i = 0; i < n; i++) {
    printf("%d ", fn);
    fn = f0 + f1;
    f0 = f1;
    f1 = fn;
  }

  return 0;
}