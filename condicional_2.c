//Faça um programa para ler um número inteiro (considereque serão lidos apenas valores positivos e inteiros) e escrever se o número é par ou ímpar.
#include<stdio.h>
#include<math.h>

int main (){

    int num;
    printf("Qual numero será testado? "); scanf("%i", &num);
    if(num>=0 && num%2==0){

        printf("O número digitado é par");

    }
    else{
        
        printf("O núemro sorteado é impar");

    }
    
return 0;

}