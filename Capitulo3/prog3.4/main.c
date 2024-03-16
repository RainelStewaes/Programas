#include <stdio.h>
#include <math.h>

/* Suma cuadrados.
El programa, al recibir como datos un grupo de enteros positivos, obtiene el cuadrado de los mismos y la suma correspondiente a dichos cuadrados. */
void main(void)
{
    int NUM;
    long CUA, SUC = 0;
    printf(\nIngrese un número entero -0 para terminar-:\t);
    scanf(%d, &NUM);
    while (NUM != 0) // Se cambió la condición para que el bucle se repita mientras NUM sea distinto de cero.
    {
        CUA = pow(NUM, 2);
        printf(%d al cuadrado es %ld\n, NUM, CUA); // Se corrigió para imprimir el cuadrado del número.
        SUC = SUC + CUA;
        printf(\nIngrese un número entero -0 para terminar-:\t);
        scanf(%d, &NUM);
    }
    printf(\nLa suma de los cuadrados es %ld\n, SUC);
}
