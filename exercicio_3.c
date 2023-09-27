//Fazer um programa que converta centímetros parapolegadas (obs.: 1 polegada = 2.54cm)
#include<stdio.h>
#include<math.h>

int main (){

    float cm;
    printf("Quantos centimetros serao convertidos: ");
    scanf("%f", &cm);
    printf("A quantidade de polegadas é %f ", 2.54 * cm);
    return 0;

}