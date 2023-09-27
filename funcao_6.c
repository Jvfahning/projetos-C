//Escreva uma função que receba um único valor representando ossegundos. Essa função deverá convertê-lo para horas, minutos esegundos. Mostrar o resultado da conversão
#include<stdio.h>
#include<math.h>

conversao(int s);

int conversao(int s){

    int m , h;
    if(s<60){

        printf("São 0h 0min %is", s);

   } else if(s>=60 && s<3600){

        m=s/60;
        s=s%60;
        printf("São 0h %imin %is", m, s);


   } else if(s>=3600){

        h=s/3600;
        s=s%3600;
        m=s/60;
        s=s%60;
        printf("São %ih %imin %is", h, m, s);
   }
    

}

int main(){

    int s;
    printf("Digite a quantidade de segundos "); scanf("%i", &s);
    conversao(s);
    return 0;

}