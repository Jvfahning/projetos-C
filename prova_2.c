#include<stdio.h>
#include<math.h>

void mostra(){

    int n, i, d;
    float pi;
    d=5;
    pi=4.0-(4.0/3.0);
    printf("Quantos termos serão mostrados? "); scanf("%i", &n);
    printf("4-(4/3)");
    for(i=0; i<=n-1;i=i+2){
        
        printf("+(4/%i)", d);
        d=d+2;
        printf("-(4/%i)", d);
        d=d+2;

    }

}

int main(){

    int n, i;
    float pi, d;
    d=5.0;
    pi=4.0-(4.0/3.0);
    printf("Quantos termos serão calculados? "); scanf("%i", &n);

    for(i=0; i<=n-1;i=i+2){
        
        pi=pi+(4.0/d);
        
        d=d+2.0;
        pi=pi-(4.0/d);
        d=d+2;
    }
    printf("\nO valor de pi é %.5f\n", pi);
    mostra();
    return 0;
}