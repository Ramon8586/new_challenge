/*Construye un programa que permite convertir de pulgadas a milimetros, de yardas a metros
y de millas a kilometros*/

//Consideraciones: 1 pulgada = 25.4 milimetros, 1 yarda = 0.9144 metros, 1 milla = 1.60934 kilometros

#include <stdio.h>

int main() {
    float pulgadas, milimetros;
    float yardas, metros;
    float millas, kilometros;

    // Solicitar al usuario que ingrese la cantidad en pulgadas
    printf("Ingrese la cantidad en pulgadas: ");
    scanf("%f", &pulgadas);
    milimetros = pulgadas * 25.4;
    printf("%.2f pulgadas son %.2f milimetros\n", pulgadas, milimetros);

    // Solicitar al usuario que ingrese la cantidad en yardas
    printf("Ingrese la cantidad en yardas: ");
    scanf("%f", &yardas);
    metros = yardas * 0.9144;
    printf("%.2f yardas son %.2f metros\n", yardas, metros);

    // Solicitar al usuario que ingrese la cantidad en millas
    printf("Ingrese la cantidad en millas: ");
    scanf("%f", &millas);
    kilometros = millas * 1.60934;
    printf("%.2f millas son %.2f kilometros\n", millas, kilometros);

    return 0;
}   