#include <stdio.h>

/* Prototipos de funciones */
void Cuadrado(int[][50], int);
void Imprime(int[][50], int);

void main(void)
{
    int CMA[50][50], TAM;

    do
    {
        printf("Ingrese el tamaño impar de la matriz: ");
        scanf("%d", &TAM);
    } while ((TAM > 50 || TAM < 1) || (TAM % 2 == 0));
    /* Se verifica el tamaño del arreglo y el orden (impar) del mismo. */

    Cuadrado(CMA, TAM);
    Imprime(CMA, TAM);
}

void Cuadrado(int A[][50], int N)
/* Esta función se utiliza para formar el cuadrado mágico. */
{
    int I = 1, FIL = 0, COL = N / 2, NUM = N * N;

    while (I <= NUM)
    {
        A[FIL][COL] = I;

        if (I % N != 0)
        {
            FIL = (FIL - 1 + N) % N;
            COL = (COL + 1) % N;
        }
        else
        {
            FIL++;
        }

        I++;
    }
}

void Imprime(int A[][50], int N)
/* Esta función se utiliza para escribir el cuadrado mágico. */
{
    int I, J;

    for (I = 0; I < N; I++)
    {
        for (J = 0; J < N; J++)
        {
            printf("\nElemento %d %d: %d", I + 1, J + 1, A[I][J]);
        }
    }
}
