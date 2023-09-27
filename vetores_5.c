//Preencher um vetor X de 10 elementos com o número 1 se o índice do elemento for ímpar e com o número 0 se o índice for par. Mostrar o vetor X
#include<stdio.h>
#include<math.h>

int main(){

    int v[10];
    int i, n;
    for(i=0;i<=9;i++){

        printf("Digite o valor do %i° indice do vetor", i+1);
        scanf("%i", &v[i]);
        if(n%2==0){

            v[i]=0;

        } else{

            v[i]=1;

        }

    }

    for(i=0;i<=9;i++){

        printf("%i", v[i]);

    }
return 0;

}