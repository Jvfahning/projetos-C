#include <stdio.h>
#include <stdlib.h>

int main() {

    int i, j,s,  vet_1[15], vet_2[15];
    s=0;
    for(i = 0; i < 15; i++){
        printf("Digite o valor da posicao %i: ", i+1);
        scanf("%i", &vet_1[i]);
    }

    for(i = 0; i < 15; i++){
        for(j=1; j<=vet_1[i];j++){

            if(vet_1[i]%j==0){

                s++;
            }
        }
        if(s==2){

            vet_2[i]=vet_1[i];
        }else{

            vet_2[i]=0;
        }
        s=0;
    }    

    
    printf("\nVetor B: ");
    for(i = 0; i < 15; i++){
        printf("%i ", vet_2[i]);
    }    

    return 0;
}