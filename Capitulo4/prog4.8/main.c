#include <stdio.h>

/* Prototipos de función */
void funcion1(int *, int *);
int funcion2(int, int *);

/* Variables globales */
int a, b, c, d;

/* Función principal */
void main(void)
{
    int a; /* Variable local */
    a = 1;
    b = 2;
    c = 3;
    d = 4;
    printf("\n%d %d %d %d", a, b, c, d);
    funcion1(&b, &c);
    printf("\n%d %d %d %d", a, b, c, d);
    a = funcion2(c, &d);
    printf("\n%d %d %d %d", a, b, c, d);
}

/* Definición de la función funcion1 */
void funcion1(int *b, int *c)
{
    int d; /* Variable local */
    a = 5; /* Referencia a la variable global a */
    d = 3; /* Variable local */
    (*b)++;
    (*c) += 2;
    printf("\n%d %d %d %d", a, *b, *c, d);
}

/* Definición de la función funcion2 */
int funcion2(int c, int *d)
{
    int b; /* Variable local */
    a++;
    b = 7;
    c += 3;
    (*d) += 2;
    printf("\n%d %d %d %d", a, b, c, *d);
    return c;
}
