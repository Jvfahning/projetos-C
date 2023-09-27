#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

    int ar[] = {10, 15, 4, 25, 3, -4};
    int *p = &ar[2];
    printf("%i",  *(ar + ar[2]));

    return 0;
}