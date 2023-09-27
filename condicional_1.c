//Faça um programa que leia um valor e determine se o valor lido é positivo ou negativo
#include<stdio.h>
#include<math.h>

int main (){

    int num;
    printf("Qual numero será testado? "); scanf("%i", &num);
    if (num>0){

        printf("O número escolhido é positivo");

    }
    else{

        printf("O número escolhido é negativo");

    }
return 0;

}