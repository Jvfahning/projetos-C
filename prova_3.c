#include<stdio.h>
#include<math.h>

int main(){

    int v[10];
    int i, d, e, m;
    for(i=0;i<=9;i++){

        printf("Digite o valor do consumo %i° carro ", i+1);
        scanf("%i", &v[i]);
    }

    for(i=0; i<=9; i++){
        d=i-1;
        if(v[i]>v[d]){

            e=v[i];

        }

    }

    for(i=0; i<=9; i++){

        m=1000/v[i];
        printf("O %i° carro faz 1000km com %i L\n ", i+1, m);

    }
    printf("O carro mais economico faz %i km/L", e);
    return 0;
}