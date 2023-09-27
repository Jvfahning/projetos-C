//Faça um programa para ler 3 valores e escrever a somados 2 maiores. Considere que o usuário não informarávalores iguais
#include<stdio.h>
#include<math.h>

int main (){

    int n1, n2, n3;
    printf("Digite o primerio núemro "); scanf("%i", &n1);
    printf("Digite o segundo número "); scanf("%i", &n2);
    printf("Digite o terceiro número "); scanf("%i", &n3);

    if(n1>n2 && n2>n3){
        printf("A soma dos dois maiores núemros é %i", n1+n2);
    }
    else if(n1>n2 && n3>n2){
    printf("A soma dos dois maiores núemros é %i", n1+n3);
      }  
    
    else{
            printf("A soma entre os dois maiores núemros é %i", n2+n3);
    }
    
    return 0;

}