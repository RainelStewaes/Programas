#include <stdio.h>

/* Factorial.
El programa calcula el factorial de un número entero.
FAC, I, NUM: variables de tipo entero. */
void main(void)
{
    int I, NUM;
    long FAC;
    printf(Ingrese el número: );
    scanf(%d, &NUM);

    if (NUM >= 0)
    {
        FAC = 1;
        for (I = 1; I <= NUM; I++)
        {
            FAC *= I; // Se calcula el factorial multiplicando por cada número desde 1 hasta NUM
        }
        printf(El factorial de %d es: %ld, NUM, FAC);
    }
    else
    {
        printf(El número debe ser no negativo para calcular su factorial.);
    }
}
