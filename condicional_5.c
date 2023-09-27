// Faça um programa que leia a idade de 2 homens e 2 mulheres (considere que a idade dos homens será sempre diferente, assim como das mulheres). Calcule e escreva a soma das idades do homem mais velho com a mulher mais nova, e o produto das idades do homem mais novo com a mulher mais velha
#include<stdio.h>
#include<math.h>

int main (){

    int h1, h2, m1, m2;
    printf("Qual idade do primeiro homem? "); scanf("%i", &h1);
    printf("Qual idade do segundo homem? "); scanf("%i", &h2);
    printf("Qual idade da primeira mulher? "); scanf("%i", &m1);
    printf("Qual idade da segunda mulher? "); scanf("%i", &m2);

    if (h1>h2 && m1<m2){

        printf("A soma entre as idade é %i\n", h1+m1);
        printf("O produto entre as idades é %i", h2*m2);

    }
    else if(h1>h2 && m1>m2){
        
        printf("A soma entre as idades é %i\n", h1+m2);
        printf("O produto entr as idades é %i", h2*m1);

    }
    else if(h1<h2 && m1>m2){

        printf("A soma entre as idades é %i\n", h2+m2);
        printf("O produto entre as idades é %i", h1*m1);

    }
    else if(h1<h2 && m1<m2){

        printf("A soma entre as idade é %i\n", h2+m1);
        printf("O produto ente as idades é %i", h1*m2);

    }

return 0;
    
}