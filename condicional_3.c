//Faça um programa para ler 2 valores inteiros e uma das seguintes operações a serem executadas (codificada daseguinte forma: 1.Adição, 2.Subtração, 3.Divisão, 4.Multiplicação). Calcular e escrever o resultado dessa operação sobre os dois valores lidos
#include<stdio.h>
#include<math.h>

int main (){

    int n1, n2, op;
    printf("Digite o primerio núemro "); scanf("%i", &n1);
    printf("Digite o segundo núemro "); scanf("%i", &n2);
    printf("Escolha a operação: [1]Adição, [2]Subtração, [3]Divisão, [4]Multiplicação "); scanf("%i", &op);

    switch (op){

        case 1: printf("A adição entre os números é %i", n1+n2); break;
        case 2: printf("A subtração entre os números é %i", n1-n2); break;
        case 3: if(n2!=0){printf("A divisão entre os números é %i", n1/n2);}; break;
        case 4: printf("O produto entre esses números é %i", n1*n2); break;

    }
    return 0;

}
    

