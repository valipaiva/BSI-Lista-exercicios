#include <stdio.h>
#include <stdlib.h>

int ** alocaMatriz(int lin, int col)
{   int l;
    int **matriz;
    matriz = (int **) malloc(lin * sizeof(int *)); //primeiro aloca um vetor de ponteiros (cada elemento deste vetor apontará para um bloco de inteiros (linha da matriz))
    for(l=0;l<lin;l++)
        matriz[l]= (int *) malloc(col * sizeof(int));
    return matriz;
}

int main(){
    int n,i,j;
    int **m;

    printf("Digite o valor de n:  ");
    scanf("%d", &n);

    m = alocaMatriz(n,n);

    //inicializa matriz em 0
    // a partir daqui, observe que não percorremos TAM linhas, mas sim n (que são as preechidas)
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            m[i][j] = 0;

    // preenche a primeira coluna com 1
    for(i=0; i<n; i++)
        m[i][0] = 1;

    //calcula as demais posições
    for(i=1; i<n; i++){
        for(j=1; j<n; j++){
           m[i][j] = m[i-1][j-1] + m[i-1][j];
        }
    }

    //se for diferente de 0, imprime
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(m[i][j] > 0)
                printf("%3d ", m[i][j]);
        }
        printf("\n");
    }

    return 0;
}

//fica como exercício
