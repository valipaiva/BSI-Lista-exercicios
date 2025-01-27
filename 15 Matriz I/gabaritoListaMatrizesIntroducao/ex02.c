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
    int linha, coluna,
        somaLinha=0, somaColuna=0,
        i, j;

    srand(time(NULL));//inicialização da semente do gerador de nros aleatorios
    preencheMatriz(m, TAML, TAMC, 2);

    printf("Digite linha e coluna: ");
    scanf("%d %d", &linha, &coluna);

    printf("\n\nMatriz original: \n");
    for(i=0; i<TAML; i++){
        for(j=0; j<TAMC; j++)
            printf("%4d", m[i][j]);
        printf("\n");
    }

    for(j=0; j<TAMC; j++)
        somaLinha = somaLinha + m[linha][j];
    for(i=0; i<TAMC; i++)
        somaColuna = somaColuna + m[i][coluna];

    //impressão da soma descontando o elemento repetido!
    printf("A soma da linha %d com a coluna %d eh %d! ", linha, coluna, somaColuna+somaLinha-m[linha][coluna]);

    return 0;
}
