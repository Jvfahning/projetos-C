//Crie um programa que preencha e mostre uma matriz 10 x 20 com números inteiros. Somar
//cada uma das linhas, armazenando o resultado das somas em um vetor (mostre o vetor). A
//seguir o programa deverá multiplicar cada elemento da matriz pela soma da linha
//correspondente e mostrar a matriz resultante
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void gm(int m[10][20]){
    int l, c;
    srand(time(NULL));
    for (l=0;l<10;l++){
        for(c=0;c<20;c++)
            printf("%3d", m[l][c]=rand()%100);
        printf("\n");
    }
}

void cv(int m[10][20], int v[10]){
    int l, c, k, soma;
    soma=0;
    k=0;
    printf("\nVetor:\n\n");
    for(l=0;l<10;l++){
        for(c=0;c<20;c++){
            soma=soma+m[l][c];
        }
        v[k]=soma;
        printf("%d ", v[k]);
        soma=0;
        k++;
    }
    k=0;
    printf("\n\nMatriz multiplicada:\n\n");
    for (l=0;l<10;l++){
        for(c=0;c<20;c++){
            m[l][c]=m[l][c]*v[k];
            printf("%8d", m[l][c]);
        }
        k++;
        printf("\n");
    }
}


int main(){
    int m[10][20], v[10];
    gm(m);
    cv(m, v);
    return 0;
}