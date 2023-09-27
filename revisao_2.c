#include <stdio.h>


void primo(int n){
    int i, cont = 0;
    for(i=1; i<=n; i++){
        if (n%i == 0){
            cont = cont + 1;
        }
    }
    if (cont == 2){
        printf("O número é primo");
    }
    else
    printf("Não é primo");
}

void main(){
    int n;

    printf("Qual o numero?");
    scanf("%d", &n);

    primo(n);
}
#include <stdio.h>

void primo(int n){
    int i, cont = 0;
    for(i=1; i<=n; i++){
        if (n%i == 0){
            cont = cont + 1;
        }
    }
    if (cont == 2){
        printf("O numero e primo");
    }
    else
    printf("Nao e primo");
}

int main(){
    int n;

    printf("Qual o numero?");
    scanf("%d", &n);

    primo(n);
    return 0;
}