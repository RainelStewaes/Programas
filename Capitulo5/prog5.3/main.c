#include <stdio.h>

/* Apuntadores, variables y valores. */
int main(void)
{
    int X = 3, Y = 7, Z[5] = {2, 4, 6, 8, 10};
    printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d",
           X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);

    int *IX; /* IX representa un apuntador a un entero. */
    IX = &X; /* IX apunta a X. */

    Y = *IX; /* Y toma el valor de X. */

    *IX = 1; /* X se modifica, ahora vale 1. */

    printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d",
           X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);

    IX = &Z[2]; /* IX apunta al tercer elemento del arreglo Z. */

    Y = *IX; /* Y toma el valor de Z[2]. */
    *IX = 15; /* Z[2] se modifica, ahora vale 15. */

    printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d",
           X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);

    X = *IX + 5; /* X se modifica, ahora vale 20. */
    *IX = *IX - 5; /* Z[2] se modifica, ahora vale 10. */

    printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d",
           X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);

    ++*IX; /* Z[2] se modifica, ahora vale 11. */
    *IX += 1; /* Z[2] se modifica, ahora vale 12. */

    printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d",
           X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);

    X = *(IX + 1); /* X se modifica, toma el valor de Z[3]. */
    Y = *IX; /* Y toma el valor de Z[2]. */

    printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d",
           X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);

    IX = IX + 1; /* IX se modifica, apunta a Z[3]. */
    Y = *IX; /* Y toma el valor de Z[3]. */

    printf("\nX = %d \t Y = %d \t Z[0]= %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d",
           X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);

    IX = IX + 4; /* IX se modifica, ahora está fuera del arreglo (comportamiento indefinido). */
    Y = *IX; /* Y toma un valor indefinido (basura). */

    printf("\nX = %d \t Y = %d \t Z[0]= %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d",
           X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);

    IX = &X; /* IX apunta a la variable X. */
    IX = IX + 1; /* IX se mueve una posición y apunta a una celda incorrecta (comportamiento indefinido). */
    X = *IX; /* X toma un valor indefinido (basura). */

    printf("\nX = %d \t Y = %d \t Z[0]= %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d",
           X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);

    return 0;
}
