# include <stdio.h>

/* Prototipo de función */
int mad(int);

/* Función principal */
void main(void) {
    int NUM, RES;
    printf("\nIngresa el número: ");
    scanf("%d", &NUM);
    RES = mad(NUM);
    printf("\nEl mayor divisor de %d es: %d", NUM, RES);
}

/* Función para calcular el mayor divisor */
int mad(int N1) {
    int I = (N1 / 2);
    /* I se inicializa con el máximo valor posible que puede ser divisor de N1. */
    while (N1 % I) {
        /* El ciclo se mantiene activo mientras (N1 % I) sea distinto de cero.
        Cuando el resultado sea 0, se detiene, ya que se habrá encontrado
        el mayor divisor de N1. */
        I--;
    }
    return I;
}
