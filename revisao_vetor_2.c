//Escreva um programa que armazene 10 valores inteiros no vetor A e crie o vetor B do mesmo
//tipo, observando as regras de formação: se o valor do índice de B for par, o valor do elemento
//será o elemento de A multiplicado por 5; se o índice for ímpar, o elemento será o elemento de
//A somado com 5. Mostre o conteúdo dos dois vetores

#include<stdio.h>
#include<math.h>

int main(){

    int A[10];
    int B[10];
    int i;
    for(i=0; i<10; i++){

        printf("valor do indice do vetor"); scanf("%i", &A[i]);
        
        if(A[i]%2==0){

            B[i]=A[i]*5;

        } else{

            B[i]=A[i]+5;

        }

    }
    printf("Vetor a: ");
    for(i=0; i<10; i++){

        printf("%i ", A[i]);

    }
    printf("\nVetor b: ");
    for(i=0; i<10; i++){

        printf("%i ", B[i]);

    }

    return 0;
}