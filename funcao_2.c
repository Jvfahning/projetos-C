//Escreva um programa contendo uma função que receba 2 números e retorne omaior valor. Mostre o resultado
#include<stdio.h>
#include<math.h>

maior_valor(int n1 , int n2);

int maior_valor(int n1 , int n2){

    if(n1>n2){

        printf("O maior valor é %i", n1);

    } else{

        printf("O maior valor é %i", n2);
        
    }

}
int main(){

    maior_valor(5,3);
   return 0;

}
