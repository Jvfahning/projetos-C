#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <unistd.h>

typedef struct{
    int DepF, DepE, Sen, Gov, Pre;
} voto, *Pvoto;

voto m[550];
int v[550], sessao, Eleitores, x[5][6], CM, cmn;

void zeradordev(){
    int i, j;
    for(i=0;i<550;i++){
        m[i].DepF=-2;
        m[i].DepE=-2;
        m[i].Sen=-2;
        m[i].Gov=-2;
        m[i].Pre=-2;
    }
    for(i=0;i<5;i++){
        for(j=0;j<6;j++){
            x[i][j]=0;
        }
    }
    for(i=0;i<550;i++)
        v[i]=0;
}

void candidatos(){
    printf("Candidatos a DEPUTADO FEDERAL:\n\n-Marcos Pimentel 2324 PCI\n-Claúdio Paiva 1188 PLO\n-Maria da Silva 6745 PGP\n-Lucicleide Manoela 8543 PIF\n\nCandidatos a DEPUTADO ESTADUAL:\n\n-Juliana Bonde 23244 PCI\n-Bartolomeu Henrique 11888 PLO\n-Laura Lins 67455 PGP\n-Jonas Costa 85433 PIF\n\nCandidatos a SENADOR:\n\n-Guilherme César 232 PCI\n-Melinda Joana 118 PLO\n-Lindalva 'Rosalinda' Pereira 674 PGP\n-Nivaldo Francini  854 PIF\n\nCandidatos a GOVERNADOR:\n\n-Paulo Moreira 76 PCI\n-Jõao Vitor Herculano 98 PLO\n-Lena Freire 55 PGP\n-Rafaela Cris 23 PIF\n\nCandidatos a PRESIDENTE:\n\n-Luma Mond 23 PCI\n-Helena Joía 11 PLO\n-Paulo César 67 PGP\n-Manoel 'Blue Pen' Gomes 85 PIF\n\n");
}

void clear(){
  while ( getchar() != '\n' );
}

void fim(){
    setlocale(LC_ALL, "portuguese");
    int z;
    z=0;
    printf("---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n\n\n\n\n\n");
        printf("                                         ______________________________________________                          ___                             ___                                     ___\n                                        |                                              |                        |   |                           |   |_                                 _|   |\n                                        |   ___________________________________________|                        |   |                           |     |_                             _|     |\n");
        printf("                                        |   |                                                                   |___|                           |   |_  |                           |  _|   |\n                                        |   |                                                                    ___                            |   | |  |                         |  | |   |\n                                        |   |                                                                   |   |                           |   |  |  |                       |  |  |   |\n");
        printf("                                        |   |                                                                   |   |                           |   |   |  |                     |  |   |   |\n                                        |   |                                                                   |   |                           |   |    |  |                   |  |    |   |\n                                        |   |                                                                   |   |                           |   |     |  |                 |  |     |   |\n");
        printf("                                        |   |__________________________________                                 |   |                           |   |      |  |               |  |      |   |\n                                        |                                      |                                |   |                           |   |       |  |             |  |       |   |\n                                        |    __________________________________|                                |   |                           |   |        |  |           |  |        |   |\n");
        printf("                                        |   |                                                                   |   |                           |   |         |  |         |  |         |   |\n                                        |   |                                                                   |   |                           |   |          |  |       |  |          |   |\n                                        |   |                                                                   |   |                           |   |           |  |     |  |           |   |\n");
        printf("                                        |   |                                                                   |   |                           |   |            |  |   |  |            |   |\n                                        |   |                                                                   |   |                           |   |             |  |_|  |             |   |\n                                        |   |                                                                   |   |                           |   |              |_____|              |   |\n");
        printf("                                        |   |                                                                   |   |                           |   |                                   |   |\n                                        |   |                                                                   |   |                           |   |                                   |   |\n                                        |   |                                                                   |   |                           |   |                                   |   |\n                                        |   |                                                                   |   |                           |   |                                   |   |\n                                        |   |                                                                   |   |                           |   |                                   |   |\n                                        |   |                                                                   |   |                           |   |                                   |   |\n                                        |   |                                                                   |   |                           |   |                                   |   |\n                                        |   |                                                                   |   |                           |   |                                   |   |\n                                        |   |                                                                   |   |                           |   |                                   |   |\n                                        |   |                                                                   |   |                           |   |                                   |   |\n                                        |   |                                                                   |   |                           |   |                                   |   |\n                                        |   |                                                                   |   |                           |   |                                   |   |\n                                        |   |                                                                   |   |                           |   |                                   |   |\n                                        |___|                                                                   |___|                           |___|                                   |___|\n\n\n\n\n\n\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n------------------------CHAME O MESÁRIO.------------------------\nInsira a credencial: "); scanf("%d", &cmn);
    do{
        if(cmn==CM){
            printf("Pressione ENTER.");
            getchar();
            z=1;
        }
        else{
            printf("Credencial errada. Por favor digite a credencial correta: "); scanf("%i", &cmn);
        }
    }while(z==0);
}

void zeresimaA(){
    setlocale(LC_ALL, "portuguese");
    int i, j;
    printf("-----------------ZERÉSIMA-----------------\nSessão: %i\n\n", sessao);
    for(i=0;i<5;i++){
        for(j=0;j<6;j++){
            if(i==0){
                if(i==0 && j==0)
                printf("Votos para Deputado federal:\n\n");
                switch(j){
                case 0:
                    printf("Candidato 1 Número 1234: %d\n", x[i][j]);
                    break;
                case 1:
                    printf("Candidato 2 Número 2345: %d\n", x[i][j]);
                    break;
                case 2:
                    printf("Candidato 3 Número 3456: %d\n", x[i][j]);
                    break;
                case 3:
                    printf("Candidato 4 Número 4567: %d\n", x[i][j]);
                    break;
                case 4:
                    printf("Votos em branco: %d\n", x[i][j]);
                    break;
                case 5:
                    printf("Votos Nulos: %d\n\n", x[i][j]);
                    break;
                }
            }
            if(i==1){
                if(i==1 && j==0)
                printf("Votos para Deputado Estadual:\n\n");
                switch(j){
                case 0:
                    printf("Candidato 1 Número 12345: %d\n", x[i][j]);
                    break;
                case 1:
                    printf("Candidato 2 Número 23456: %d\n", x[i][j]);
                    break;
                case 2:
                    printf("Candidato 3 Número 34567: %d\n", x[i][j]);
                    break;
                case 3:
                    printf("Candidato 4 Número 45678: %d\n", x[i][j]);
                    break;
                case 4:
                    printf("Votos em branco: %d\n", x[i][j]);
                    break;
                case 5:
                    printf("Votos Nulos: %d\n\n", x[i][j]);
                    break;
                }
            }
            if(i==2){
                if(i==2 && j==0)
                printf("Votos para Senador:\n");
                switch(j){
                case 0:
                    printf("Candidato 1 Número 123: %d\n\n", x[i][j]);
                    break;
                case 1:
                    printf("Candidato 2 Número 234: %d\n", x[i][j]);
                    break;
                case 2:
                    printf("Candidato 3 Número 345: %d\n", x[i][j]);
                    break;
                case 3:
                    printf("Candidato 4 Número 456: %d\n", x[i][j]);
                    break;
                case 4:
                    printf("Votos em branco: %d\n", x[i][j]);
                    break;
                case 5:
                    printf("Votos Nulos: %d\n\n", x[i][j]);
                    break;
                }
            }
            if(i==3){
                if(i==3 && j==0)
                printf("Votos para Governador:\n\n");
                switch(j){
                case 0:
                    printf("Candidato 1 Número 12: %d\n", x[i][j]);
                    break;
                case 1:
                    printf("Candidato 2 Número 23: %d\n", x[i][j]);
                    break;
                case 2:
                    printf("Candidato 3 Número 34: %d\n", x[i][j]);
                    break;
                case 3:
                    printf("Candidato 4 Número 45: %d\n", x[i][j]);
                    break;
                case 4:
                    printf("Votos em branco: %d\n", x[i][j]);
                    break;
                case 5:
                    printf("Votos Nulos: %d\n\n", x[i][j]);
                    break;
                }
            }
            if(i==4){
                if(i==4 && j==0)
                printf("Votos para Presidente:\n\n");
                switch(j){
                case 0:
                    printf("Candidato 1 Número 98: %d\n", x[i][j]);
                    break;
                case 1:
                    printf("Candidato 2 Número 87: %d\n", x[i][j]);
                    break;
                case 2:
                    printf("Candidato 3 Número 76: %d\n", x[i][j]);
                    break;
                case 3:
                    printf("Candidato 4 Número 65: %d\n", x[i][j]);
                    break;
                case 4:
                    printf("Votos em branco: %d\n", x[i][j]);
                    break;
                case 5:
                    printf("Votos Nulos: %d\n\n", x[i][j]);
                    break;
                }
            }
        }
    }
}

void zeresima(){
    setlocale(LC_ALL, "portuguese");
    int i, j;
    printf("\n-----------------ZERÉSIMA-----------------\nSessão: %i\n\n", sessao);
    for(i=0;i<5;i++){
        for(j=0;j<6;j++){
            if(i==0){
                if(i==0 && j==0)
                printf("Votos para Deputado federal:\n\n");
                switch(j){
                case 0:
                    printf("MARCOS PIMENTEL 2324 PCI: %d\n", x[i][j]);
                    break;
                case 1:
                    printf("CLAÚDIO PAIVA 1188 PLO: %d\n", x[i][j]);
                    break;
                case 2:
                    printf("MARIA DA SILVA 6745 PGP: %d\n", x[i][j]);
                    break;
                case 3:
                    printf("LUCICLEIDE MANOELA 8543 PIF: %d\n", x[i][j]);
                    break;
                case 4:
                    printf("Votos em branco: %d\n", x[i][j]);
                    break;
                case 5:
                    printf("Votos Nulos: %d\n\n", x[i][j]);
                    break;
                }
            }
            if(i==1){
                if(i==1 && j==0)
                printf("Votos para Deputado Estadual:\n\n");
                switch(j){
                case 0:
                    printf("JULIANA BONDE 23244 PCI: %d\n", x[i][j]);
                    break;
                case 1:
                    printf("BARTOLOMEU HENRIQUE 11888 PLO: %d\n", x[i][j]);
                    break;
                case 2:
                    printf("LAURA LINS 67455 PGP: %d\n", x[i][j]);
                    break;
                case 3:
                    printf("JONAS COSTA 85433 PIF: %d\n", x[i][j]);
                    break;
                case 4:
                    printf("Votos em branco: %d\n", x[i][j]);
                    break;
                case 5:
                    printf("Votos Nulos: %d\n\n", x[i][j]);
                    break;
                }
            }
            if(i==2){
                if(i==2 && j==0)
                printf("Votos para Senador:\n\n");
                switch(j){
                case 0:
                    printf("GUILHERME CÉSAR 232 PCI: %d\n", x[i][j]);
                    break;
                case 1:
                    printf("MELINDA JOANA 118 PLO: %d\n", x[i][j]);
                    break;
                case 2:
                    printf("LINDALVA 'ROSALINDA' PEREIRA 674 PGP: %d\n", x[i][j]);
                    break;
                case 3:
                    printf("NIVALDO FRANCINI 854 PIF: %d\n", x[i][j]);
                    break;
                case 4:
                    printf("Votos em branco: %d\n", x[i][j]);
                    break;
                case 5:
                    printf("Votos Nulos: %d\n\n", x[i][j]);
                    break;
                }
            }
            if(i==3){
                if(i==3 && j==0)
                printf("Votos para Governador:\n\n");
                switch(j){
                case 0:
                    printf("PAULO MOREIRA 76 PCI: %d\n", x[i][j]);
                    break;
                case 1:
                    printf("JÕAO VITOR HERCULANO 98 PLO: %d\n", x[i][j]);
                    break;
                case 2:
                    printf("LENA FREIRE 55 PGP: %d\n", x[i][j]);
                    break;
                case 3:
                    printf("RAFAELA CRIS 23 PIF: %d\n", x[i][j]);
                    break;
                case 4:
                    printf("Votos em branco: %d\n", x[i][j]);
                    break;
                case 5:
                    printf("Votos Nulos: %d\n\n", x[i][j]);
                    break;
                }
            }
            if(i==4){
                if(i==4 && j==0)
                printf("Votos para Presidente:\n\n");
                switch(j){
                case 0:
                    printf("LUMA MOND 23 PCI: %d\n", x[i][j]);
                    break;
                case 1:
                    printf("HELENA JOÍA 11 PLO: %d\n", x[i][j]);
                    break;
                case 2:
                    printf("PAULO CÉSAR 67 PGP: %d\n", x[i][j]);
                    break;
                case 3:
                    printf("MANOEL 'BLUE PEN' GOMES 85 PIF: %d\n", x[i][j]);
                    break;
                case 4:
                    printf("Votos em branco: %d\n", x[i][j]);
                    break;
                case 5:
                    printf("Votos Nulos: %d\n\n", x[i][j]);
                    break;
                }
            }
        }
    }
}

void votof(){
    setlocale(LC_ALL, "portuguese");
    int i, z, j, em, k, t;
    t=0;
    for(j=0;j<Eleitores;j++){
        v[j]=-1;
    }
    for(i=0;i<Eleitores;i++){
        k=1;
        do{
            em=rand()%550;
            for(j=0;j<Eleitores;j++){
                if(v[j]==em)
                    k=0;
            }
        }while(k==0);
        v[t]=em;
        printf("----------------------------------------------------------------BEM-VINDO----------------------------------------------------------------\n\n");
        candidatos();
        printf("Digite o número do candidato a Deputado federal(4 dígitos numéricos). Caso deseje votar em branco digite zero: "); scanf("%i", &m[em].DepF);
        while(z!=1){
            switch(m[em].DepF){
                case 2324:
                    printf("Confirme o voto em MARCOS PIMENTEL digitando 1 ou, para corrigir, digite 0: "); scanf("%d", &z);
                    break;
                case 1188:
                    printf("Confirme o voto em CLAÚDIO PAIVA digitando 1 ou, para corrigir, digite 0: "); scanf("%d", &z);
                    break;
                case 6745:
                    printf("Confirme o voto em MARIA DA SILVA digitando 1 ou, para corrigir, digite 0: "); scanf("%d", &z);
                    break;
                case 8543:
                    printf("Confirme o voto em LUCICLEIDE MANOELA digitando 1 ou, para corrigir, digite 0: "); scanf("%d", &z);
                    break;
                case 0:
                    printf("Confirme o voto em branco digitando 1 ou, para corrigir, digite 0: "); scanf("%d", &z);
                    if(z==1)
                        m[em].DepF=0;
                    break;
                default:
                    printf("confirme o voto nulo digitando 1 ou, para corrigir, digite 0: "); scanf("%d", &z);
                    if(z==1)
                        m[em].DepF=-1;
                    break;
            }
            if(z==0){
                printf("Digite o número do candidato a Deputado federal(4 dígitos numéricos). Caso deseje votar em branco digite zero: "); scanf("%i", &m[em].DepF);
            }
        }
        printf("\n");
        z=0;
        printf("Digite o número do candidato a Deputado Estadual(5 dígitos numéricos). Caso deseje votar em branco digite zero: "); scanf("%i", &m[em].DepE);
        while(z!=1){
            switch(m[em].DepE){
                case 23244:
                    printf("Confirme o voto em JULIANA BONDE digitando 1 ou, para corrigir, digite 0: "); scanf("%d", &z);
                    break;
                case 11888:
                    printf("Confirme o voto em BARTOLOMEU HENRIQUE digitando 1 ou, para corrigir, digite 0: "); scanf("%d", &z);
                    break;
                case 67455:
                    printf("Confirme o voto em LAURA LINS digitando 1 ou, para corrigir, digite 0: "); scanf("%d", &z);
                    break;
                case 85433:
                    printf("Confirme o voto em JONAS COSTA digitando 1 ou, para corrigir, digite 0: "); scanf("%d", &z);
                    break;
                case 0:
                    printf("Confirme o voto em branco digitando 1 ou, para corrigir, digite 0: "); scanf("%d", &z);
                    if(z==1)
                        m[em].DepE=0;
                    break;
                default:
                    printf("confirme o voto nulo digitando 1 ou, para corrigir, digite 0: "); scanf("%d", &z);
                    if(z==1)
                       m[em].DepE=-1;
                    break;
            }
            if(z==0){
                 printf("Digite o número do candidato a Deputado federal(5 dígitos numéricos). Caso deseje votar em branco digite zero: "); scanf("%i", &m[em].DepE);
            }
        }
        printf("\n");
        z=0;
        printf("Digite o número do candidato a Senador(3 dígitos numéricos). Caso deseje votar em branco digite zero: "); scanf("%i", &m[em].Sen);
        while(z!=1){
            switch(m[em].Sen){
                case 232:
                    printf("Confirme o voto em GUILHERME CÉSAR digitando 1 ou, para corrigir, digite 0: "); scanf("%d", &z);
                    break;
                case 118:
                    printf("Confirme o voto em MELINDA JOANA digitando 1 ou, para corrigir, digite 0: "); scanf("%d", &z);
                    break;
                case 674:
                    printf("Confirme o voto em LINDALVA 'ROSALINDA' PEREIRA digitando 1 ou, para corrigir, digite 0: "); scanf("%d", &z);
                    break;
                case 854:
                    printf("Confirme o voto em NIVALDO FRANCINI digitando 1 ou, para corrigir, digite 0: "); scanf("%d", &z);
                    break;
                case 0:
                    printf("Confirme o voto em branco digitando 1 ou, para corrigir, digite 0: "); scanf("%d", &z);
                    if(z==1)
                        m[em].Sen=0;
                    break;
                default:
                    printf("confirme o voto nulo digitando 1 ou, para corrigir, digite 0: "); scanf("%d", &z);
                    if(z==1)
                        m[em].Sen=-1;
                    break;
            }
            if(z==0){
                printf("Digite o número do candidato a Senador(3 dígitos numéricos). Caso deseje votar em branco digite zero: "); scanf("%i", &m[em].Sen);
            }
        }
        printf("\n");
        z=0;
        printf("Digite o número do candidato a Governador(2 dígitos numéricos). Caso deseje votar em branco digite zero: "); scanf("%i", &m[em].Gov);
        while(z!=1){
            switch(m[em].Gov){
                case 76:
                    printf("Confirme o voto em PAULO MOREIRA digitando 1 ou, para corrigir, digite 0: "); scanf("%d", &z);
                    break;
                case 98:
                    printf("Confirme o voto em JÕAO VITOR HERCULANO digitando 1 ou, para corrigir, digite 0: "); scanf("%d", &z);
                    break;
                case 55:
                    printf("Confirme o voto em LENA FREIRE digitando 1 ou, para corrigir, digite 0: "); scanf("%d", &z);
                    break;
                case 23:
                    printf("Confirme o voto em RAFAELA CRIS digitando 1 ou, para corrigir, digite 0: "); scanf("%d", &z);
                    break;
                case 0:
                    printf("Confirme o voto em branco digitando 1 ou, para corrigir, digite 0: "); scanf("%d", &z);
                    if(z==1)
                        m[em].Gov=0;
                    break;
                default:
                    printf("confirme o voto nulo digitando 1 ou, para corrigir, digite 0: "); scanf("%d", &z);
                    if(z==1)
                        m[em].Gov=-1;
                    break;
            }
            if(z==0){
                printf("Digite o número do candidato a Governador(2 dígitos numéricos). Caso deseje votar em branco digite zero: "); scanf("%i", &m[em].Gov);
            }
        }
        printf("\n");
        z=0;
        printf("Digite o número do candidato a Presidente(2 dígitos numéricos). Caso deseje votar em branco digite zero: "); scanf("%i", &m[em].Pre);
        while(z!=1){
            switch(m[em].Pre){
                case 23:
                    printf("Confirme o voto em LUMA MOND digitando 1 ou, para corrigir, digite 0: "); scanf("%d", &z);
                    break;
                case 11:
                    printf("Confirme o voto em HELENA JOÍA digitando 1 ou, para corrigir, digite 0: "); scanf("%d", &z);
                    break;
                case 67:
                    printf("Confirme o voto em PAULO CÉSAR digitando 1 ou, para corrigir, digite 0: "); scanf("%d", &z);
                    break;
                case 85:
                    printf("Confirme o voto em MANOEL 'BLUE PEN' GOMES digitando 1 ou, para corrigir, digite 0: "); scanf("%d", &z);
                    break;
                case 0:
                    printf("Confirme o voto em branco digitando 1 ou, para corrigir, digite 0: "); scanf("%d", &z);
                    if(z==1)
                        m[em].Pre=0;
                    break;
                default:
                    printf("confirme o voto nulo digitando 1 ou, para corrigir, digite 0: "); scanf("%d", &z);
                    if(z==1)
                        m[em].Pre=-1;
                    break;
            }
            if(z==0){
                printf("Digite o número do candidato a Presidente(2 dígitos numéricos). Caso deseje votar em branco digite zero: "); scanf("%i", &m[em].Pre);
            }
        }
        printf("\n");
        z=0;
        fim();
        clear();
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        t++;
    }
}

void votoA(){
    int i, j, k, t, z;
    srand(time(NULL));
    t=0;
    for(i=0;i<550;i++){
        v[j]=-1;
    }
    for(i=0;i<550;i++){
        k=1;
        do{
            z=rand()%550;
            for(j=0;j<550;j++)
                if(v==z)
                    k=0;
        }while(k==0);
        v[t]=z;
        switch(rand()%6){
            case 0:
                m[z].DepF=2324;
                break;
            case 1:
                m[z].DepF=1188;
                break;
            case 2:
                m[z].DepF=6745;
                break;
            case 3:
                m[z].DepF=8543;
                break;
            case 4:
                m[z].DepF=0;
                break;
            case 5:
                m[z].DepF=-1;
                break;
        }
        switch(rand()%6){
            case 0:
                m[z].DepE=23244;
                break;
            case 1:
                m[z].DepE=11888;
                break;
            case 2:
                m[z].DepE=67455;
                break;
            case 3:
                m[z].DepE=85433;
                break;
            case 4:
                m[z].DepE=0;
                break;
            case 5:
                m[z].DepE=-1;
                break;
        }
        switch(rand()%6){
            case 0:
                m[z].Sen=232;
                break;
            case 1:
                m[z].Sen=118;
                break;
            case 2:
                m[z].Sen=674;
                break;
            case 3:
                m[z].Sen=854;
                break;
            case 4:
                m[z].Sen=0;
                break;
            case 5:
                m[z].Sen=-1;
                break;
        }
        switch(rand()%6){
            case 0:
                m[z].Gov=76;
                break;
            case 1:
                m[z].Gov=98;
                break;
            case 2:
                m[z].Gov=55;
                break;
            case 3:
                m[z].Gov=23;
                break;
            case 4:
                m[z].Gov=0;
                break;
            case 5:
                m[z].Gov=-1;
                break;
        }
        switch(rand()%6){
            case 0:
                m[z].Pre=23;
                break;
            case 1:
                m[z].Pre=11;
                break;
            case 2:
                m[z].Pre=67;
                break;
            case 3:
                m[z].Pre=8585 ;
                break;
            case 4:
                m[z].Pre=0;
                break;
            case 5:
                m[z].Pre=-1;
                break;
        }
        t++;
    }
}

void Contacaodevoto(){
    setlocale(LC_ALL, "portuguese");
    int i, k;
    i=0;
    for(k=0;k<550;k++){
        switch(m[k].DepF){
            case 2324:
                x[i][0]++;
                break;
            case 1188:
                x[i][1]++;
                break;
            case 6745:
                x[i][2]++;
                break;
            case 8543:
                x[i][3]++;
                break;
            case 0:
                x[i][4]++;
                break;
            case -1:
                x[i][5]++;
                break;
        }
        i++;
        switch(m[k].DepE){
            case 23244:
                x[i][0]++;
                break;
            case 11888:
                x[i][1]++;
                break;
            case 67455:
                x[i][2]++;
                break;
            case 85433:
                x[i][3]++;
                break;
            case 0:
                x[i][4]++;
                break;
            case -1:
                x[i][5]++;
                break;
        }
        i++;
        switch(m[k].Sen){
            case 232:
                x[i][0]++;
                break;
            case 118:
                x[i][1]++;
                break;
            case 674:
                x[i][2]++;
                break;
            case 854:
                x[i][3]++;
                break;
            case 0:
                x[i][4]++;
                break;
            case -1:
                x[i][5]++;
                break;
        }
        i++;
        switch(m[k].Gov){
            case 76:
                x[i][0]++;
                break;
            case 98:
                x[i][1]++;
                break;
            case 55:
                x[i][2]++;
                break;
            case 23:
                x[i][3]++;
                break;
            case 0:
                x[i][4]++;
                break;
            case -1:
                x[i][5]++;
                break;
        }
        i++;
        switch(m[k].Pre){
            case 23:
                x[i][0]++;
                break;
            case 11:
                x[i][1]++;
                break;
            case 67:
                x[i][2]++;
                break;
            case 85:
                x[i][3]++;
                break;
            case 0:
                x[i][4]++;
                break;
            case -1:
                x[i][5]++;
                break;
        }
        i=0;
    }
}

int main(){
    setlocale(LC_ALL, "portuguese");
    srand(time(NULL));
    int d;
    zeradordev();
    printf("Iniciando Urna...\n\n");
    CM=rand()%1000;
    printf("Credencial do mesário: %d\n\n--------------POR FAVOR, ANOTE SUA CREDENCIAL POIS ELA SÓ SERÁ EXIBIDA NESSE MOMENTO.--------------\n\nPara continuar pressione ENTER.", CM);
    clear();
    printf("\nPor favor, confirme o número da sessão e a quantidade de eleitores, respectivamente: "); scanf("%d %d", &sessao, &Eleitores);
    if(sessao==0){
        do{
            printf("Número da sessão inválido. Por favor digite o número correto: "); scanf("%d", &sessao);
        }while(sessao=0);
    }
    if(Eleitores==0){
        do{
            printf("Quantidade de eleitores inválida, por favor digite novamente uma quantidade válida: "); scanf("%d", &Eleitores);
        }while(Eleitores==0);
    }
    if(Eleitores>550){
        do{
            printf("Quantidade de eleitores maior que a permitida, por favor digite a quantidade correta: "); scanf("%d", &Eleitores);
        }while(Eleitores>550);
    }
    printf("\nProcessando...\n\nPronto pra iniciar a verificação de votos.\nCaso aja uma irregularidade acione a polícia.\nPressione ENTER.");
    clear();
    getchar();
    zeresima();
    printf("Caso não apresente nenhuma irregularidade pressione ENTER");
    clear();
    printf("\n");
    printf("deseja iniciar votação de teste automática? caso afirmativo digite 1, caso negativo digite 0: "); scanf("%d", &d);
    clear();
    if(d==1){
        printf("\nIniciando votação teste...\n\nContabilizando votos...\n\nPressione ENTER para ver o zerésima.");
        getchar();
        votoA();
        Contacaodevoto();
        printf("\n");
        zeresimaA();
        zeradordev();
    }
    printf("Deseja iniciar a votação? Caso afirmativo digite 1, Caso negativo digite 0:"); scanf("%d", &d);
    if(d==0){
        printf("Encerrando urna... Pressione ENTER.");
        clear();
    }
    else{
        clear();
        printf("\nProcessando...\n\nPronto pra iniciar, pressione ENTER e chame eleitor");
        clear();
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        votof();
        Contacaodevoto();
        d=1;
        printf("Número de eleitores atingido.\n\nContando votos...\n\nVotos contabilizados. Por favor insira a credencial do mesário para a nova zerésima: "); scanf("%d", &cmn);
        do{
            if(cmn==CM){
                zeresima();
                printf("\n\n---------------------Para encerrar a urna pressione ENTER.---------------------");
                clear();
                getchar();
                d=0;
            }
            else{
                printf("Credencial errada. Por favor digite a credencial certa: "); scanf("%d", &cmn);
            }
        }while(d==1);
    }
    return 0;
}