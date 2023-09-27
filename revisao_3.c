#include<stdio.h>
#include<math.h>

void soma_Primo(int a, int b){

    int s, i, cont;
    s=0;
    while(a<=b){
        cont=0;
        for(i=2; i<=a; i++){
        
            if (a%i == 0){
            cont = cont + 1;
            }
        }
        if (cont == 2){
            s=s+a;
        }
        a=a+1;
    }
    return s;
}
int main(){

    int x, y, r;
    
    printf("Digite o primeiro número e o segundo"); scanf("%i %i", &x, &y);
    while(x<y){

        r=soma_Primo(x, y);
        printf("%i\n", r);


    }
    return 0;
}

