#include<stdio.h>
#define TAML 3
#define TAMC 3
int main(){
    int m[TAML][TAMC]={0},
        i, j,
        somaLinha,
        controle = 0;

    //inicializa��o da semente do gerador de nros a
    srand(time(NULL));

    //preenche a matriz com nros aleat�rios
    /*for(i=0; i<TAML; i++)
        for(j=0; j<TAMC; j++)
            m[i][j] = rand()%2;*/
    //para teste, cria matriz identidade
    for(i=0; i<TAML; i++)
        m[i][i]=1;

    /*Soma cada linha*/
    for(i=0; i<TAML; i++){
        somaLinha=0; //note que � preciso zerar a cada troca de linha
        for(j=0; j<TAMC; j++){
            somaLinha+=m[i][j];
        }
        if(somaLinha>1)
            controle=1;
    }

    //imprime a matriz
    for(i=0; i<TAML; i++){
        for(j=0; j<TAMC; j++)
            printf("%3d ", m[i][j]);
        printf("\n");
    }

    if(controle==0)
        printf("A matriz eh de permuta��o");
    else
        printf("A matriz NAO eh de permuta��o");

    return 0;
}
