/*
Haz un programa en C que genere una tabla de equivalencias entre kilómetros y millas náuticas. 
El programa preguntará el intervalo (por ejemplo, desde 10 a 100 kilómetros) y el
paso (por ejemplo, cada 10 kilómetros) y creará una tabla en la que cada línea
dará la distancia en millas para cada distancia en kilómetros. Tómese que una
milla náutica son 1.852 metros.
*/

#include <stdio.h>
#include <math.h>

int main() {
    double inicio, fin, paso, km, millas;
    
    printf("Introduce el intervalo inicial en kilometros: ");
    scanf("%lf", &inicio);
    printf("Introduce el intervalo final en kilometros: ");
    scanf("%lf", &fin);
    printf("Introduce el paso en kilometros: ");
    scanf("%lf", &paso);
    
    printf("\nTabla de equivalencias entre kilometros y millas nauticas:\n");
    printf("Kilometros\tMillas nauticas\n");
    
    for (km = inicio; km <= fin; km += paso) {
        millas = km / 1.852;
        printf("%.2f\t\t%.2f\n", km, millas);
    }
    
    return 0;
}