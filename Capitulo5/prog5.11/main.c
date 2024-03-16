#include <stdio.h>

/* Prototipos de funciones */
void Lectura(int[], int);
int Binaria(int[], int, int);

const int MAX = 100;

int main() {
    int RES, ELE, TAM, VEC[MAX];

    do {
        printf("Ingrese el tamaño del arreglo: ");
        scanf("%d", &TAM);
    } while (TAM > MAX || TAM < 1); // Verifica que el tamaño del arreglo sea correcto

    Lectura(VEC, TAM);

    printf("\nIngrese el elemento a buscar: ");
    scanf("%d", &ELE);

    RES = Binaria(VEC, TAM, ELE); // Llama a la función que busca en el arreglo

    if (RES != -1) {
        printf("\nEl elemento se encuentra en la posición: %d", RES);
    } else {
        printf("\nEl elemento no se encuentra en el arreglo");
    }

    return 0;
}

/* Función para leer un arreglo unidimensional de T elementos de tipo entero */
void Lectura(int A[], int T) {
    for (int I = 0; I < T; I++) {
        printf("Ingrese el elemento %d: ", I + 1);
        scanf("%d", &A[I]);
    }
}

/* Función para realizar una búsqueda binaria */
int Binaria(int A[], int T, int E) {
    int IZQ = 0, DER = T - 1;

    while (IZQ <= DER) {
        int CEN = (IZQ + DER) / 2;

        if (A[CEN] == E) {
            return CEN; // Elemento encontrado, devuelve la posición
        } else if (A[CEN] < E) {
            IZQ = CEN + 1;
        } else {
            DER = CEN - 1;
        }
    }

    return -1; // No se encontró el elemento en el arreglo
}
