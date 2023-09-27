//Crie um programa contendo uma função que receba 3 números e retorne omaior valor. Atenção: use a função escrita da questão 2
#include<stdio.h>
#include<math.h>

maior_valor(int n1 , int n2, int n3);

int maior_valor(int n1 , int n2, int n3){

    if(n1>n2 && n1>n3){

        printf("O maior valor é %i", n1);

    } else if(n2>n1 && n2>n3){

        printf("O maior valor é %i", n2);
        
    }else{

        printf("O maior valor é %i", n3);

    }

}

int main(){

    int n1, n2, n3;
    printf("Digite um número "); scanf("%i %i %i",&n1,&n2,&n3);
    maior_valor(n1,n2,n3);
    return 0;

}