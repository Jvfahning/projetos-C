//Faça uma função que receba como argumento os valores dos lados deum triângulo. A função deverá retornar 0 se o triângulo for equilátero(os 3 lados iguais), 1 se for isósceles (2 lados iguais) ou 2 se forescaleno (os 3 lados diferentes)
#include<stdio.h>
#include<math.h>

ver_trinagulo(int a, int b, int c);

ver_trinagulo(int a, int b, int c){

    if(a<b+c && b<a+c && c<a+b){

        if(a==b && a==c && b==c){

            return 0;

        } else if(a!=b && a!=c && b!=c){

            return 2;

        } else if(a==b || a==c || b==c){

            return 1;

        }

    } else{

        return 3;

    }

}

int main(){
    
    int a, b , c;
    printf("Digite tres números "); scanf("%i %i %i",&a,&b,&c);
    printf("%i", ver_trinagulo(a,b,c));
    return 0;

}