//Escreva um programa que preencha uma matriz 6x4 com números inteiros, calcule e mostre
//quantos elementos dessa matriz são maiores que 30 e, em seguida, monte uma segunda matriz
//com os elementos diferentes de 30. No lugar do número 30, da segunda matriz, coloque o número zero

#include<stdio.h>
#include<math.h>
#include<time.h>

int main(){

    int m[6][4]={};
    int i, j, s;
    s=0;
    for(i=0;i<=5;i++){

        for(j=0;j<=3;j++){

            m[i][j] = rand()%32;
            if(m[i][j]>30){

                s=s+1;

            }

            printf("%i ", m[i][j] );
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<=5;i++){

        for(j=0;j<=3;j++){

            if(m[i][j]==30){

                m[i][j]=0;

            }
            printf("%i ", m[i][j] );
        }
        printf("\n");
    }
    printf("%i", s);

return 0;
}