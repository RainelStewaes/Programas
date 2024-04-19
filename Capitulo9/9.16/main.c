#include <stdio.h>
#include <stdlib.h>

void sumypro(FILE *); /* Prototipo de función. */

int main(void)
{
    FILE *ap;
    if ((ap = fopen("arc2.txt", "r")) != NULL)
    {
        sumypro(ap);
        fclose(ap);
    }
    else
    {
        printf("No se puede abrir el archivo");
        return 1; // Se devuelve un valor diferente de 0 para indicar un error.
    }
    return 0; // Se devuelve 0 para indicar que el programa se ejecutó correctamente.
}

void sumypro(FILE *ap1)
{
    char cad[30];
    int i = 0;
    float sum = 0.0, r;
    while (fgets(cad, 30, ap1) != NULL) // Se lee la cadena del archivo.
    {
        r = atof(cad);
        if (r)
        {
            i++;
            sum += r;
        }
    }
    printf("\nSuma: %.2f", sum);
    if (i != 0) // Se verifica si i es diferente de cero antes de calcular el promedio.
        printf("\nPromedio: %.2f", sum / i);
    else
        printf("\nNo se encontraron números para calcular el promedio.");
}
