//Faça um programa contendo uma função que receba 3 inteiros a, b, c, sendo a maior que 1. A função deverá somar todos os inteiros entre b e c que sejamdivisíveis por a (inclusive b e c) e retornar o resultado para ser mostrado
#include<stdio.h>
#include<math.h>

soma_de_divisao(int a, int b, int c);

int soma_de_divisao(int a, int b, int c){

    int s;
    s=0;
    if(a>1){

        while(b<=c){

            if(b%a==0){

                s=s+b;

            }
            b=b+1;
        }

    }
    return s;
}

int main(){

    int a, b , c;
    printf("Digite tres números "); scanf("%i %i %i",&a,&b,&c);
    printf("%i",soma_de_divisao(a,b,c));
    return 0;
}