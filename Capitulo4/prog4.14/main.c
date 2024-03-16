#include <stdio.h>

/* Prototipo de función */
void Rango(float);

/* Variables globales */
int RA1 = 0;
int RA2 = 0;
int RA3 = 0;
int RA4 = 0;
int RA5 = 0;

/* Función principal */
void main(void) {
    float CAL;

    printf("Ingresa la primera calificación del alumno: ");
    scanf("%f", &CAL);

    while (CAL != -1) {
        Rango(CAL);
        printf("Ingresa la siguiente calificación del alumno (-1 para terminar): ");
        scanf("%f", &CAL);
    }

    printf("\n0..3.99 = %d\n", RA1);
    printf("4..5.99 = %d\n", RA2);
    printf("6..7.99 = %d\n", RA3);
    printf("8..8.99 = %d\n", RA4);
    printf("9..10 = %d\n", RA5);
}

/* Función para determinar el rango de la calificación */
void Rango(float VAL) {
    if (VAL >= 0 && VAL < 4)
        RA1++;
    else if (VAL >= 4 && VAL < 6)
        RA2++;
    else if (VAL >= 6 && VAL < 8)
        RA3++;
    else if (VAL >= 8 && VAL < 9)
        RA4++;
    else if (VAL >= 9 && VAL <= 10)
        RA5++;
}
