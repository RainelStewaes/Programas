#include <stdio.h>

/* Prototipos de función */
int Suma(int X, int Y);
int Resta(int X, int Y);
int Control(int (*apf)(int, int), int X, int Y);

/* Función Suma */
int Suma(int X, int Y) {
    return (X + Y);
}

/* Función Resta */
int Resta(int X, int Y) {
    return (X - Y);
}

/* Función Control */
int Control(int (*apf)(int, int), int X, int Y) {
    int RES;
    RES = (*apf)(X, Y); /* Llama a la función Suma o Resta */
    return (RES);
}

/* Función principal */
void main(void) {
    int R1, R2;
    R1 = Control(Suma, 15, 5); /* Se pasa la función Suma como parámetro */
    R2 = Control(Resta, 10, 4); /* Se pasa la función Resta como parámetro */
    printf("\nResultado 1: %d", R1);
    printf("\nResultado 2: %d", R2);
}
