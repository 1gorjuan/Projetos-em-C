#include <stdio.h>

int main() {
    float Vin, Vled, Iled;

    printf("CalcResist v1.0\n\n");
    printf("Autor: Igor Juan\n\n\n");

    printf("Digite o valor de Vin (Em Volts):\n");
    scanf("%f", &Vin);
    printf("\n");

    printf("Digite o valor de Vled (Em Volts):\n");
    scanf("%f", &Vled);
    printf("\n");

    printf("Digite o valor de Iled (Em Amperes):\n");
    scanf("%f", &Iled);
    printf("\n");

    float R = (Vin - Vled) / Iled;

    printf("Vin = %.2f\n", Vin);
    printf("Vled = %.2f\n", Vled);
    printf("O valor da resistência é: %.2f", R);

    return 0;
}