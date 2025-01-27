#include<stdlib.h>

#define NLIN 5
#define NCOL 5

void preencheMatriz(int m[][NCOL], int nl, int nc, int num)
{
    int i, j;

    for(i=0; i<nl; i++)
        for(j=0; j<nc; j++)
            m[i][j] = rand()%num+1;
}


void imprimeMatriz(int m[][NCOL], int nl, int nc)
{
    int i, j;

    for(i=0; i<nl; i++){
        for(j=0; j<nc; j++)
            printf("%4d", m[i][j]);
        printf("\n");
    }
}

void encontraMinimax (int matriz[][NCOL], int nl, int nc, int *minimax, int *l, int *c)
{
    *l=*c=0;
    int i, j, maior;
    maior=matriz[0][0];
    for (i = 0; i < nl; i++){
        for (j = 0; j < nc; j++){
            if (matriz[i][j] > maior){
                *l = i;
                maior = matriz[i][j];
            }
        }
    }

    *minimax=maior;
    for (i = 0; i < NCOL; i++){
        if (matriz[*l][i] <= *minimax){
            *c = i;
            *minimax = matriz[*l][i];
        }
    }
}


int main()
{
    int matriz[NLIN][NCOL], minMax, lin, col;

    preencheMatriz(matriz, NLIN, NCOL, 10);
    imprimeMatriz(matriz, NLIN, NCOL);
    encontraMinimax(matriz, NLIN, NCOL, &minMax, &lin, &col);

    printf("\nminmax: %d \nCoordenada: %d-%d \n", minMax, lin, col);

    return 0;
}
