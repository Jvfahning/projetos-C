//Escreva um programa que leia um númeroindeterminado de valores (até que o usuáriodigite o zero). Calcule e mostre a soma dosnúmeros
#include<stdio.h>
#include<math.h>

int main(){

    int n, s;
    s=0;
    do{

        printf("Qual número digitado? "); scanf("%i", &n);

        s=s+n;

    }while(n!=0);

    printf("A soma é %i", s);

    return 0;

}