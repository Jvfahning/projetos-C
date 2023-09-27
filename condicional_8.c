//Faça um programa que receba como entrada os coeficientes (a, b, c) de uma equação do 2º grau,calcule e mostre as raízes desta equação.
#include<stdio.h>
#include<math.h>

int main(){

    float a, b, c, x1, x2;
    double d;
    printf("Quais os valores dos coeficientes da equação?"); scanf("%f %f %f", &a, &b, &c);
    d = (b*b)-(4*a*c);

    if(d<0){

        printf(" Não há solução real, pois não existe raiz quadrada de número negativo");

    }
    else if(d==0){

        printf("Há duas soluções iguais: %f", -b/(2*a));

    }
    else if(d>0){

        printf("Há duas soluções reais e diferentes: x1=%lf  e x2=%lf", (-b+sqrt(d))/(2*a), (-b-sqrt(d))/(2*a));

    }

    return 0;
}
