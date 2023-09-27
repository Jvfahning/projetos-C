//Faça uma função que recebe a altura e o sexo de uma pessoa porparâmetro e retorna o seu peso ideal. Calcular o peso ideal usando a fórmula
#include<stdio.h>
#include<math.h>

peso_ideal(float altura, int op);

int peso_ideal(float altura, int op){

    int peso;
    switch(op){

        case 1: peso=72.7 * altura - 58; return peso; break;
        case 2: peso=62.1 * altura - 44.7; return peso; break;

    }
    

}

int main(){

    float altura; int op;
    printf("Qual sua altura? "); scanf("%f", &altura);
    printf("Homem[1] ou Mulher[2]"); scanf("%i", &op);
    printf("O seu peso ideal é %i", peso_ideal(altura, op) );
    return  0;


}