//Calcular e mostrar os números divisíveis por 4 menores que 100
#include<stdio.h>
#include<math.h>

int main(){

    int i;
    printf("Os números divisiveis por 4 são: ");
    for(i=4; i<100; i++){

        if(i%4==0){

            printf(" %i ", i);

        }

    }

return 0;
}