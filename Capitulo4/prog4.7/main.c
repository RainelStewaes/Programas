#include <stdio.h>

/* Prototipo de función */
int f1(int); /* El parámetro es por valor y de tipo entero */

/* Función principal */
void main(void)
{
    int I, K = 4;
    for (I = 1; I <= 3; I++)
    {
        printf("\n\nValor de K antes de llamar a la función: %d", ++K);
        printf("\nValor de K después de llamar a la función: %d", f1(K));
        /* Llamada a la función f1. Se pasa una copia de la variable K. */
    }
}

/* Definición de la función f1 */
int f1(int R)
{
    R += R;
    return (R);
}
