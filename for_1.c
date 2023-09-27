//A conversão de graus Fahrenheit para Celcius é obtida porC=(F-32)/1.8. Faça um programa que calcule e escreva umatabela de graus Fahrenheit em graus Celsius, cujos graus variemde 50 a 65 de 1 em 1
#include<stdio.h>
#include<math.h>

int main(){

    int c, f;
    for(f=50; f<=65; f++){

        printf("%i graus Fahreheit são %f Celsius\n ", f, (f-32)/1.8);

    }
return 0;
}
