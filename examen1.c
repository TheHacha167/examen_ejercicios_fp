#include <stdio.h>

int main() {
    int p0 = 1, p1 = 1, p2 = 1, pn, i, start, end, sum = 0;

    printf("Ingrese la posición inicial: ");
    scanf("%d", &start);
    printf("Ingrese la posición final: ");
    scanf("%d", &end);

    for (i = 3; i <= end; i++) {
        pn = p0 + p1;
        p0 = p1;
        p1 = p2;
        p2 = pn;

        if (i >= start) {
            sum += pn;
        }
    }

    printf("La suma de los elementos de la sucesión de Padovan entre las posiciones %d y %d es: %d\n", start, end, sum);

    return 0;
}
