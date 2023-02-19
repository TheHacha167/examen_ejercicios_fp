#include <stdio.h>

void insertionSort(double arr[], int n) {
    int i, j;
    double key;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    double arr[10];
    int n, i;

    printf("Ingrese el número de elementos (menor o igual a 10): ");
    scanf("%d", &n);

    printf("Ingrese los elementos de la serie:\n");
    for (i = 0; i < n; i++) {
        scanf("%lf", &arr[i]);
    }

    insertionSort(arr, n);

    printf("La serie ordenada de menor a mayor es:\n");
    for (i = 0; i < n; i++) {
        printf("%lf ", arr[i]);
    }
    printf("\n");

    return 0;
}
