//Escreva uma função que receba um vetor X de 20 elementos como parâmetro e retorne a quantidade de números positivos, 
//a quantidade de números negativos e a soma dos números do vetor X
#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>

int vetor_20(){
    
    int x[20];
    int i, sp, sn, st;
    sp=0; sn=0; st=0;
    srand(time(NULL));
    for(i=0; i<=19; i++){

        x[i]=rand()%30;
        st=st+x[i];
        if(x[i]>0){

            sp=sp+1;

        } else if(x[i]<0){

            sn=sn+1;

        }
        
    }
    printf("%i %i %i", sp, sn, st);

}

int main(){

    int res;
    res=vetor_20();
    printf("%i", res);
    return 0;

}