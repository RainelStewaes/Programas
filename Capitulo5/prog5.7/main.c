#include <stdio.h>

/* Prototipos de funciones */
void Lectura(int *, int);
void Imprime(int *, int);
void Elimina(int *, int *);

int main(void) {
    int TAM, ARRE[100];

    /* Se solicita el tamaño del arreglo asegurándose de que esté dentro de los límites */
    do {
        printf("Ingrese el tamaño del arreglo: ");
        scanf("%d", &TAM);
    } while (TAM > 100 || TAM < 1);

    Lectura(ARRE, TAM);
    Elimina(ARRE, &TAM);  /* El tamaño del arreglo se pasa por referencia */
    Imprime(ARRE, TAM);

    return 0;
}

/* Función para leer un arreglo unidimensional de enteros *
