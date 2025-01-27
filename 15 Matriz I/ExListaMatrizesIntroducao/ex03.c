#include<stdio.h>
#define TAML 7
#define TAMC 7
#include<stdlib.h>

void preencheMatriz(int m[][TAMC], int nl, int nc, int num)
{
    int i, j;

    for(i=0; i<nl; i++)
        for(j=0; j<nc; j++)
        {
            m[i][j] = rand()%num+1;
        }
}


void imprimeMatriz(int m[][TAMC], int nl, int nc)
{
    int i, j;

    for(i=0; i<nl; i++)
    {
        for(j=0; j<nc; j++)
            printf("%4d", m[i][j]);
        printf("\n");
    }

}

void trocaMaiorComDiagonal(int m[][TAMC], int nl, int nc)
{
    int i, j,
        maiorLin,
        indMaiorLin,
        temp;

    /*Acha o maior elemento em cada linha e faz a troca*/
    for(i=0; i<TAML; i++)
    {
        maiorLin=m[i][0];
        indMaiorLin=0; //note que � preciso zerar a cada troca de linha
        for(j=0; j<TAMC; j++)
        {
            if(m[i][j]>maiorLin)
            {
                maiorLin=m[i][j];
                indMaiorLin=j;
            }
        }
        temp = m[i][i];
        m[i][i] = m[i][indMaiorLin];
        m[i][indMaiorLin] = temp;
    }
}

int main()
{
    int m[TAML][TAMC];
    srand(time(NULL));

    preencheMatriz(m, TAML, TAMC, 10); // observe que podemos passar valores de nl e nc diferentes (menores) que NLIN e NCOL
    imprimeMatriz(m, TAML, TAMC);
    trocaMaiorComDiagonal(m, TAML, TAMC);

    printf("\n\nFINAL: \n");
    imprimeMatriz(m, TAML, TAMC);

    return 0;

}
