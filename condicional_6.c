//Faça um programa que mostre o menu de opções aseguir, receba a opção do usuário e os dados necessários para cada operação. Menu de opções:1-Somar dois números; 2-Raiz quadrada de um número
#include<stdio.h>
#include<math.h>

int main(){

    int op , n1 ,n2;
    double n;
    printf("Qual opção será escolhida: [1]Soma de dois números ou [2]Raiz quadarada de um número "); scanf("%i", &op);

    switch(op){

        case 1: printf("Digite os dois números "); scanf("%i %i", &n1,&n2); printf("A soma entre eles é %i", n1+n2);break;

        case 2: printf("Digite um número "); scanf("%lf", &n); printf("A raiz quadrada é %lf", sqrt(n)); break;

    }

    return 0;
}