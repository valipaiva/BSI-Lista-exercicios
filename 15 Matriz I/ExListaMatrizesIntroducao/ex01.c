#include<stdio.h>
#define TAML 4
#define TAMC 4
#include<stdlib.h>

void preencheMatriz(int m[][TAMC], int nl, int nc, int num)
{
    int i, j;

    for(i=0; i<nl; i++)
        for(j=0; j<nc; j++)
            m[i][j] = rand()%num+1;
}

int main()
{
    int m[TAML][TAMC];
    int i, j;

    //inicialização da semente do gerador de nros aleatorios
    srand(time(NULL));
    preencheMatriz(m, TAML, TAMC, 10); // observe que podemos passar valores de nl e nc diferentes (menores) que NLIN e NCOL

    printf("\n\nMatriz originalŔ: \n");
    for(i=0; i<TAML; i++){
        for(j=0; j<TAMC; j++)
            printf("%4d", m[i][j]);
        printf("\n");
    }

    printf("\n\nTransposta: \n");
    for(i=0; i<TAML; i++){
        for(j=0; j<TAMC; j++)
            printf("%4d", m[j][i]);
        printf("\n");
    }

    return 0;
}
