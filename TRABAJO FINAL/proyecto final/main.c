#include <stdio.h>  // Esto se refiere la biblioteca estándar de entrada y salida en c.
#include <math.h>   // Y en este caso se refiere la biblioteca de matemáticas en c que permite agregar funciones como, pow.

// Esta función calcula el pago mensual de un préstamo
float calcularPagoMensual(float prestamo, float tasaInteres, int plazoMeses) {

    // Aqui convierte la tasa de interés anual a mensual y de porcentaje a decimal
    float tasaInteresMensual = tasaInteres / 12 / 100;

    float pagoMensual;  //Se declarar la variable para el pago mensual

    //Aqui se calcula el pago mensual usando la fórmula de una anualidad
     /*se calcula el pago mensual con la formula de un prestamo amortizado
            La formula quiere decir = La cantidad de la deuda * el interes mensual de la misma / 1 - 1 + el mismo interes mensual
            elevado al plazo en negativo */
    pagoMensual = (prestamo * tasaInteresMensual) / (1 - pow(1 + tasaInteresMensual, -plazoMeses));

    return pagoMensual;  // Devuelve el pago mensual
}

// Esta función calcula e imprime una tabla de amortización para el préstamo
void calcular_tabla_amortizacion(float monto_prestamo, float tasa_interes_anual, int numero_cuotas) {
    //Aqui se convierte la tasa de interés anual a mensual y de porcentaje a decimal
    float tasa_interes_mensual = tasa_interes_anual / 12 / 100;

    // Calcular el pago mensual
    float cuota = calcularPagoMensual(monto_prestamo, tasa_interes_anual, numero_cuotas);

    //Se pprocede a Inicializar el saldo pendiente como el monto del préstamo
    float saldo_pendiente = monto_prestamo;

    //En esta parte se imprimen los encabezados de la tabla
    printf("%-10s %-10s %-10s %-13s %-10s\n", "Cuota", "Cuota", "Interés", "Amortización", "Saldo");
    printf("%-10s %-10s %-10s %-13s %-10s\n", "", "", "", "del Capital", "Pendiente");

    //Esto calcula e imprimir cada fila de la tabla
    for (int cuota_num = 1; cuota_num <= numero_cuotas; cuota_num++) {

        // Calcula el interés para este mes
        float interes = saldo_pendiente * tasa_interes_mensual;

        //Seguido del paso anterior se procede a calcular el principal pagado este mes
        float amortizacion = cuota - interes;

        // Luego se actualiza el saldo pendiente
        saldo_pendiente -= amortizacion;

        //Y aqui se imprime esta fila de la tabla
        printf("%-10d %-10.2f %-10.2f %-13.2f %-10.2f\n", cuota_num, cuota, interes, amortizacion, saldo_pendiente);
    }
}

//Luego esta función guarda los detalles del préstamo en un archivo
void guardar_detalles_prestamo(float prestamo, float tasaInteres, int plazoMeses) {

    //En esta parte se abre el archivo para escribir
    FILE *file = fopen("detalles_prestamo.txt", "w");

    // Luego se verifica si el archivo se abrió correctamente
    if (file == NULL) {
        printf("Error al abrir el archivo.\n");
        return;
    }

    // En esta parte se escribiran los detalles del préstamo en el archivo

    fprintf(file, "Cantidad del préstamo: %.2f\n", prestamo);

    fprintf(file, "Tasa de interés anual: %.2f\n", tasaInteres);

    fprintf(file, "Plazo del préstamo en meses: %d\n", plazoMeses);

    // Entonces aqui procede a cerrar el archivo
    fclose(file);

    printf("Detalles del préstamo guardados en 'detalles_prestamo.txt'.\n");
}

int main() {
    int opcion;  // Declarar la variable para la opción del menú
    float prestamo;  // Declarar la variable para el monto del préstamo

    float tasaInteres;  // Declarar la variable para la tasa de interés
    int plazoMeses;  // Declarar la variable para el plazo del préstamo

    do {
        // Se imprimen las opciones del menú
        printf("Menú:\n");

        printf("1. Calcular préstamo\n");

        printf("2. Guardar detalles del préstamo\n");

        printf("0. Salir\n");
        printf("Ingrese su opción: ");

        scanf("%d", &opcion);  // Aqui se encarga de leer la opción del usuario

        // Se realizar la opción seleccionada
        if (opcion == 1) {

            // Se genera lo que es preguntar al usuario los detalles del préstamo
            printf("Ingrese la cantidad del préstamo: ");
            scanf("%f", &prestamo);

        // Aqui lo que se le pide ya sea al usuario que ingrese la tasa de interes
            printf("Ingrese la tasa de interés anual: ");
            scanf("%f", &tasaInteres);

        // Ya en esta parte se le pide que ingrese el plazo del tiempo
            printf("Ingrese el plazo del préstamo en meses: ");
            scanf("%d", &plazoMeses);

            // Aqui se calcula e imprimir el pago mensual
            float pagoMensual = calcularPagoMensual(prestamo, tasaInteres, plazoMeses);
            printf("El pago mensual es: %.2f\n", pagoMensual);

            // luego se procede a realizar o Calcular e imprimir la tabla de amortización
            calcular_tabla_amortizacion(prestamo, tasaInteres, plazoMeses);
        } else if (opcion == 2) {

            //Aqui se guardan los detalles del préstamo en un archivo
            guardar_detalles_prestamo(prestamo, tasaInteres, plazoMeses);
        }
    } while (opcion != 0);  // Esto permite repetir hasta que el usuario elija salir

    return 0;  // Esto sirve para terminar el programa
}
