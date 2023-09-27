//Fazer um programa para calcular e mostrar o valor de S. Mostrar também a sequência. S = 1 + ½ + 1/3 + ¼ + ... + 1/50
#include<stdio.h>
#include<math.h>

int main(){

    int i, s;
    s=1;
    printf("O somatório S= 1 ");
    
    for(i=2;i<=50; i++){

        printf("+ 1/%i ", i);
        s=s+(1/i);

    }

    printf("Tem como resultado %i", s);

    return 0;
}