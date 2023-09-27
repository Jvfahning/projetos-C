//Escreva um programa que leia 5 números, conta quantos valores são negativos e escreve o resultado
#include<stdio.h>
#include<math.h>

int main(){

    int n, i, q;
    i=1;
    q=0;
    while(i<=5){

        i=i+1;
        printf("Qual número digitado? "); scanf("%i", &n);
            if(n<0){

                q=q+1;

            }


    }

    printf("A quantidade de num negativos é %i", q);

    return 0;

}