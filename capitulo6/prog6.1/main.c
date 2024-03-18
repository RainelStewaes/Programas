#include <stdio.h>

/* Diagonal principal.
El programa, al recibir como dato una matriz de tipo entero, escribe la
diagonal principal. */

const int TAM = 10;

void Lectura(int [][TAM], int);   /* prototipo de funciones. */
void Imprime(int A[][TAM], int);
/* Observe que siempre es necesario declarar el número de columnas. Si no lo
haces, el compilador marcará un error de sintaxis. */

void main(void)
{
    int MAT[TAM][TAM];
    Lectura(MAT, TAM);
    Imprime(MAT, TAM);
}

void Lectura(int A[][TAM], int F)
/* La función Lectura se utiliza para leer un arreglo bidimensinal. Observa
que solo se debe pasar como parámetro el número de filas ya que la matriz
es cuadrada. */
{
    int I, J;
    for (I=0; I<F; I++)
        for (J=0; J<F; J++)
        {
            printf("Ingrse el elemento %d %d: ", I+1, J+1);
            scanf("%d", &A[I][J]);
        }
}

void Imprime(int A[][TAM], int F)
/* La funcion Imprime se utiliza para escribir un arreglo bidimensinal
cuando de F filas y columnas. */
{
    int I, J;
    for (I=0; J<TAM; J++)
        if (I == J)
        printf("\nDiagonal %d %d %d ", I, J, A[I][J]);
}
