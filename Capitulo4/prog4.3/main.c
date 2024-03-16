#include <stdio.h>

/* Prototipo de función */
void f1(void);

/* Variable global */
int K = 5;

/* Función principal */
void main(void) {
    int I;
    for (I = 1; I <= 3; I++)
        f1();
}

/* Definición de la función f1 */
void f1(void) {
    /* Variable local */
    int K = 2;

    /* Operaciones con la variable local K */
    K += K;
    printf("\n\nEl valor de la variable local es: %d", K);

    /* Operaciones con la variable global K */
    ::K = ::K + K; /* Actualización de la variable global */
    printf("\nEl valor de la variable global es: %d", K);
}
