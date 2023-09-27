#include<stdio.h>
#include<math.h>

int main(){

    int m[8][4]={1,8,0,0,2,4,0,0,3,6,0,0,4,10,0,0,5,9,0,0,6,7,0,0,7,8,0,0,8,12,0,0};
    int i, j;
    float s, S;
    s=0;
    S=0;
    for(i=0;i<=7;i++){
        for(j=0;j<=3;j++){

            if(j==1){

                s=s+m[i][j];
            
            }

        }
    }
    s=s/8;
    printf("A média é %.2f\n\n", s);
    for(i=0;i<=7;i++){
        for(j=0;j<=3;j++){

            if(j==2){

                m[i][j]=m[i][1]-s;
            
            }
        }
        
    }
    for(i=0;i<=7;i++){
        for(j=0;j<=3;j++){

            if(j==3){

                m[i][j]=m[i][2]*m[i][2];
            
            }
            printf("%i ", m[i][j] );
        }
        printf("\n");
    }
    for(i=0;i<=7;i++){
        for(j=0;j<=3;j++){

            if(j==3){

                S=S+m[i][j];
            
            }
        }
        
    }
    printf("\n A variancia é %.2f", S);
    return 0;

}