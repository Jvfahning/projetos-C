//Escreva um programa contendo uma função que receba três números inteiros e retorne-os ordenados. A função main() deverá mostrar os valores
#include<stdio.h>
#include<math.h>

ordem(int a , int b , int c);

int ordem(int a , int b , int c){

    if(a>b && b>c){

        printf("A ordem correta é %i %i %i", c, b, a);

    } else if(b>a && b>c){

        printf("A ordem correta é %i %i %i", c, a, b);


    } else if(a>b && c>a){

        printf("A ordem correta é %i %i %i", b, a, c );


    } else if(a>b && c>b){

        printf("A ordem correta é %i %i %i",b, c, a);


    } else if(b>a && c>b){

        printf("A ordem correta é %i %i %i", a, b, c);


    } else if(b>a && c<b){

        printf("A ordem correta é %i %i %i", a, c, b);


    }

}

int main(){

    int a, b, c;
    printf("Digite tres numeros"); scanf("%i %i %i", &a, &b, &c);
    ordem(a,b,c);

}
