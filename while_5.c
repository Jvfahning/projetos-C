//Um determinado material radioativo perde metade desua massa a cada 50 segundos. Dada a massa inicial, emgramas, fazer um programa que determine o temponecessário para que essa massa se torne menor do que0,5 gramas. Escrever a massa inicial, a massa final e otempo calculado em segundos
#include<stdio.h>
#include<math.h>

int main(){

    float m, s;
    s=0;
    printf("Qual massa digitada? "); scanf("%f", &m); printf("A massa inicial é %f", m);
    while(m>0.5){

        m=m/2;
        s=s+50;

    }
    
    printf(" A massa final é %f e o tempo total é %f", m, s);

    return 0;

}