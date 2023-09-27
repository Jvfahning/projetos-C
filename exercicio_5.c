// Escreva um programa que leia o raio de um círculo,calcule e mostre a sua área. Sabe-se que A= πR2
#include<stdio.h>
#include<math.h>

int main (){

    float r, a;
    printf("Qual valor do raio do circulo? ");
    scanf("%f", &r);
    a = 3.14*r*r;
    printf("O valor do área do circulo é %f", a);
    return 0;

}