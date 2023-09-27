//Calcular a soma dos elementos de um vetor de 10 posições
#include<stdio.h>
#include<math.h>

int main(){

    int v[10]={2,42,56,2,3,7,43,4,55,9,2,42,56,2,3,7,43,4,55,9};
    int i, ss;
    float m, s;
    s=0;
    ss=0;
    for(i=0;i<=9;i++){

        s=s+v[i];



    }
    m=s/10;
    for(i=0;i<=9;i++){

        if(v[i]>m){

            ss=ss+1;

        }

    }

    printf("Os novos valores do indices ímpares são ");
    for(i=0;i<=9;i++){

        if(v[i]%2!=0){

            v[i]=v[i]*15;
            printf("%i ", v[i]);

        }

    }
    printf("A soma do vetor é %.1f, a média é %.2f e a quatidade de números maiores que a média é %i", s, m, ss);
    return 0;
}
