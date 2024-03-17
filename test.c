#include <stdio.h>

float convertir(float cantidad, int opcion) {
    float tasa;
    switch (opcion) {
        case 1:  // Quetzales a Dólares
            tasa = 0.13;
            break;
        case 2:  // Dólares a Quetzales
            tasa = 7.76;
            break;
        case 3:  // Quetzales a Euros
            tasa = 0.11;
            break;
        case 4:  // Euros a Quetzales
            tasa = 8.93;
            break;
        case 5:  // Dólares a Euros
            tasa = 0.82;
            break;
        case 6:  // Euros a Dólares
            tasa = 1.22;
            break;
        default:
            printf("Opción no válida.\n");
            return 0;
    }
    return cantidad * tasa;
}

int main() {
    int opcion;
    float cantidad, resultado;

    printf("Seleccione una opción:\n");
    printf("1. Quetzales a Dólares\n");
    printf("2. Dólares a Quetzales\n");
    printf("3. Quetzales a Euros\n");
    printf("4. Euros a Quetzales\n");
    printf("5. Dólares a Euros\n");
    printf("6. Euros a Dólares\n");
    printf("Opción: ");
    scanf("%d", &opcion);

    printf("Ingrese la cantidad a convertir: ");
    scanf("%f", &cantidad);

    resultado = convertir(cantidad, opcion);
    if (resultado != 0) {
        printf("El resultado de la conversión es: %.2f\n", resultado);
    }

    return 0;
}
