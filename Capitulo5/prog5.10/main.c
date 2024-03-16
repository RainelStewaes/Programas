 #include <stdio.h>

/* Busqueda binaria. */

const int MAX=100;

void Lectura(int[], int);
int Binaria(int[], int, int);

int main(void)
{
    int RES, ELE, TAM, VEC[MAX];
    do {
        printf("Ingrese el tamaño del arreglo: ");
        scanf("%d", &TAM);
}
         while (TAM > MAX || TAM < 1);

    Lectura(VEC, TAM);

    printf("\nIngrese el elemento a buscar: ");
    scanf("%d", &ELE);


RES = Binaria(VEC, TAM, ELE);

    if (RES != -1)
        printf("\nEl elemento se encuentra en la posición: %d\n", RES);
    else
        printf("\nEl elemento no se encuentra en el arreglo\n");


}

void Lectura(int A[], int T) {
    for (int i = 0; i < T; i++) {
        printf("Ingrese el elemento %d: ", i + 1);
        scanf("%d", &A[i]);
    }
}

int Binaria(int A[], int T, int E) {
    int IZQ = 0, DER = T - 1, CEN;

    while (IZQ <= DER) {
        CEN = (IZQ + DER) / 2;

        if (A[CEN] == E)
            return CEN;
        else
        if (A[CEN] < E)
            IZQ = CEN + 1;
        else
            DER = CEN - 1;
    }

    return ;
}
