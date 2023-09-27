//Faça um programa que calcule e mostre os 8 primeiros termos da sequência de Fibonacci
#include<stdio.h>
#include<math.h>

int main(){

    int i, s;
    s=0;
    printf("A sequência é 1 ");
    for(i=2;i<=8;i++){

        s=(i-1)+(i-2);
        printf(", %i ", s);

    }
return 0;
}