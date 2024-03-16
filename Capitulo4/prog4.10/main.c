# include <stdio.h>

/* Prototipo de función */
int multiplo(int, int);

/* Función principal */
void main(void) {
    int NU1, NU2, RES;
    printf("\nIngresa los dos números: ");
    scanf("%d %d", &NU1, &NU2);
    RES = multiplo(NU1, NU2);

    if (RES)
        printf("\nEl segundo número es múltiplo del primero");
    else
        printf("\nEl segundo número no es múltiplo del primero");
}

/* Función para determinar si N2 es múltiplo de N1 */
int multiplo(int N1, int N2) {
    int RES;
    if ((N2 % N1) == 0)
        RES = 1;
    else
        RES = 0;
    return (RES);
}
