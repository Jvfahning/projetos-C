#include<stdio.h>
#include<math.h>

int main(){

    int n, k, i, s, c, fatn, fatk, fatnk;
    printf("Qual valor de n? "); scanf("%i", &n);
    printf("Qual valor de k? "); scanf("%i", &k);
    for(fatn=1; n>1; n--){

        fatn=fatn*n;

    }
    for(fatk=1; k>1; k--){

        fatk=fatk*k;

    }

    s=n-k;

    for(fatnk=1; s>1; s--){

        fatnk=fatnk*s;

    }

    c=fatn/(fatk*fatnk);

    printf("O número de combinações é %i", c);
    
    return 0;

}