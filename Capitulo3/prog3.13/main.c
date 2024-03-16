#include <stdio.h>

/* Fibonacci.
El programa calcula y escribe los primeros 50 números de Fibonacci.
I, PRI, SEG, SIG: variables de tipo entero. */
void main(void)
{
    int I, PRI = 0, SEG = 1, SIG;
    printf(\t %d \t %d, PRI, SEG); // Impresión de los dos primeros números

    for (I = 3; I <= 50; I++) // Comienza desde el tercer número de Fibonacci
    {
        SIG = PRI + SEG;
        printf(\t %d, SIG);
        PRI = SEG;
        SEG = SIG;
    }
}
