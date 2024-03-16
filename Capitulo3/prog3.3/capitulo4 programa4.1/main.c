#include <stdio.h>

/* Prototipo de función */
int cubo(void);

/* Variable global */
int I;

/* Función principal */
void main(void) {
    int CUB;
    for (I = 1; I <= 10; I++) {
        CUB = cubo(); /* Llamada a la función cubo */
        printf("\nEl cubo de %d es: %d", I, CUB);
    }
}

/* Definición de la función cubo */
int cubo(void) {
    /* La función calcula el cubo de la variable global I */
    return (I * I * I);
}
