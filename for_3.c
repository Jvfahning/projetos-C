//Faça um programa que calcule a soma dos primeiros 100 números pares, e mostre o resultado
#include<stdio.h>
#include<math.h>

int main(){

    int i, s;
    s=0;
    for(i=2;i<=200;i=i+2){

        s = s + i;

    }
    printf("A soma é %i", s);

    return 0;

}