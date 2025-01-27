#include<stdlib.h>

#define N 3 //matriz precisa ser quadrada neste exercício!


void preencheMatriz(int m[][N], int nl, int nc, int num){
    int i, j;

    for(i=0; i<nl; i++)
        for(j=0; j<nc; j++)
        {
            m[i][j] = rand()%num+1;
        }
}


void imprimeMatriz(int m[][N], int nl, int nc){
    int i, j;

    for(i=0; i<nl; i++)
    {
        for(j=0; j<nc; j++)
            printf("%4d", m[i][j]);
        printf("\n");
    }

}

int somaTriangularSuperior(int m[][N], int nl, int nc){
    int i, j,
        soma=0;

    for(i=0; i<nl; i++)
        for(j=i+1; j<nc; j++)
            soma += m[i][j];

    return soma;
}

int somaTriangularInferior(int m[][N], int nl, int nc){
    int i, j,
        soma=0;

    for(i=0; i<nl; i++)
        for(j=0; j<i; j++)
            soma += m[i][j];

    return soma;
}

int somaDiagonalPrincipal(int m[][N], int nl, int nc){
    int i, j,
        soma=0;

    for(i=0; i<nl; i++)
        soma += m[i][i];

    return soma;
}

int somaDiagonalSecundaria(int m[][N], int nl, int nc){
    int i, j,
        soma=0;

    for(i=0; i<nl; i++)
        soma += m[i][nc-1-i];

    return soma;
}

int main()
{
    int matriz[N][N];

    srand(time(NULL));

    preencheMatriz(matriz, N, N, 3);
    imprimeMatriz(matriz, N, N);

    printf("Soma da triangular superior: %d.\n", somaTriangularSuperior(matriz,N,N));
    printf("Soma da triangular inferior: %d.\n", somaTriangularInferior(matriz,N,N));
    printf("Soma da diagonal principal: %d.\n", somaDiagonalPrincipal(matriz,N,N));
    printf("Soma da diagonal secundaria: %d.\n", somaDiagonalSecundaria(matriz,N,N));

    return 0;
}

