//Escreva uma função chamada medidasDoRetangulo que recebe osparâmetros b e h (as medidas em centímetros dos dois lados de umretângulo) e devolve, em parâmetros, A e P respectivamente, a área(b*h) e o perímetro (2*(b+h)) deste retângulo. Mostre os resultados nafunção main()
#include<stdio.h>
#include<math.h>

medidas_Do_Retangulo(int *b, int *h);

medidas_Do_Retangulo(int *b, int *h){

    int a, p;
    a=*b**h;
    p=(*b+*h)*2;
    *b=a;
    *h=p;

}

int main(){

    int b, h;
    printf("Qual valor da base e da altura? "); scanf("%i %i", &b, &h);
    medidas_Do_Retangulo(&b, &h);
    printf("A aréa é %i e o períemtro é %i", b, h);
    return 0;

}