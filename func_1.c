//Escreva uma função chamada MM que recebe dois parâmetros, A e B, edevolve o menor dos dois em A e o maior dos dois em B. Caso sejampassados valores iguais, a ordem da resposta entre eles não importa
#include<stdio.h>
#include<math.h>

void MM(int *a, int *b);

void MM(int *a, int*b){

    int t;
    if(*a>=*b){

        *a=*a;
        *b=*b;

    } else{

        t=*a;
        *a=*b;
        *b=t;

    }

}

int main(){

    int n1,n2;
    printf("Diite dois números "); scanf("%i %i", &n1, &n2);
    printf("Antes da troca n1 = %i e n2 = %i\n", n1, n2);
    MM(&n1,&n2);
    printf("Apos a troca n1 = %i e n2 = %i", n1, n2);
    return 0;

}