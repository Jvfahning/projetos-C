//Fazer um programa que calcule e mostre a área e o volume de um cilindro. Sabe-se que A = 2 π r(h+r) eV = π r² h
#include<stdio.h>
#include<math.h>

int main(){

    float h, r, a, v;
    printf("Qual valor da altura do cilindro? ");
    scanf("%f", &h);
    printf("Qual valor do raio do cilindro? ");
    scanf("%f", &r);

    a = 2*3.14*r*(h+r);
    v = 3.14*r*r*h;

    printf("O valor da área do cilindro é %f\n E o valor do volume é %f", a, v);
    return 0;
}