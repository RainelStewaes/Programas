#include <stdio.h>
#include <string.h>

union datos {
    char celular[15];
    char correo[20];
};

typedef struct {
    int matricula;
    char nombre[20];
    char carrera[20];
    float promedio;
    union datos personales;
} alumno;

void Lectura(alumno *a) {
    printf("Ingrese la matricula: ");
    scanf("%d", &(a->matricula));
    printf("Ingrese el nombre: ");
    scanf("%s", a->nombre);
    printf("Ingrese la carrera: ");
    scanf("%s", a->carrera);
    printf("Ingrese el promedio: ");
    scanf("%f", &(a->promedio));
    printf("Ingrese el correo electrónico: ");
    scanf("%s", a->personales.correo);
}

int main(void) {
    alumno a1 = {120, "María", "Contabilidad", 8.9, {.celular = "5-158-40-50"}}, a2, a3;
    printf("Alumno 2\n");
    Lectura(&a2);
    printf("Alumno 3\n");
    Lectura(&a3);

    printf("\nDatos del alumno 1\n");
    printf("%d\n", a1.matricula);
    printf("%s\n", a1.nombre);
    printf("%s\n", a1.carrera);
    printf("%.2f\n", a1.promedio);
    printf("%s\n", a1.personales.celular);

    printf("\nDatos del alumno 2\n");
    printf("%d\n", a2.matricula);
    printf("%s\n", a2.nombre);
    printf("%s\n", a2.carrera);
    printf("%.2f\n", a2.promedio);
    printf("%s\n", a2.personales.correo);

    printf("\nDatos del alumno 3\n");
    printf("%d\n", a3.matricula);
    printf("%s\n", a3.nombre);
    printf("%s\n", a3.carrera);
    printf("%.2f\n", a3.promedio);
    printf("%s\n", a3.personales.correo);

    return 0;
}

