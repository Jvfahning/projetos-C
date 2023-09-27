//Ler 10 valores, um de cada vez, e contar quantos delesestão no intervalo [10...50] e quantos deles estão fora desteintervalo. Mostrar as quantidades calculadas
#include<stdio.h>
#include<math.h>

int main(){

    int n, i, np, p;
    np=0;
    p=0;
    for(i=1;i<=10;i++){
        printf("Qual número digitado? "); scanf("%i", &n);
            if(n>=10 && n<=50){

                p=p+1;

            }
            else{

                np=np+1;

            }
                 
    }
printf("pertence: %i e não pertence: %i", p,np);

return 0;

}