#include <stdio.h>

/* Prototipo de función */
int cubo(int); /* El parámetro es de tipo entero. */

/* Función principal */
void main(void)
{
    int I;
    for (I = 1; I <= 10; I++)
        printf("\nEl cubo de %d es: %d", I, cubo(I)); /* Llamada a la función cubo. El paso del parámetro es por valor. */
}

/* Definición de la función cubo */
int cubo(int K) /* K es un parámetro por valor de tipo entero. */
{
    return (K * K * K);
}
