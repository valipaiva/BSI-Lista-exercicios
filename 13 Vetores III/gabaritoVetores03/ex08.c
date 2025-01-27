#include <stdio.h>
#define N 8
int main()
{

    int i,
        m,
       seq[N] = {7, 9, 5, 4, 5, 4, 8, 6};

    /*printf("Digite uma sequencia de %d inteiros: ", N);
    for (i = 0; i < N; i++)
        scanf("%d", &seq[i]);*/

    determinaSegmentosConsecutivos(seq, N, &i, &m);

    if (i!=-1)
    {
        printf("Existem dois segmentos iguais consecutivos. Por exemplo: i = %d e m = %d.\n", i, m-1);
    }
    else
        printf("Nao existem dois segmentos iguais consecutivos.\n");


    return 0;
}

void determinaSegmentosConsecutivos (int seq[], int n, int *ri, int *rm)
{
    int j, achou, i, m;

    achou = 0;

    for (m = 1; !achou && m <= n/2; m++)
    {
        // procura dois segmentos iguais de comprimento m consecutivos
        for (i = 0; !achou && i <= n-2*m; i++)
        {
            // i representa o inicio do primeiro segmento
            achou = 1;
            for (j = 0; achou && j < m; j++)
                // testa se os dois segmentos sao iguais mesmo
                if (seq[i+j] != seq[i+m+j])
                    achou = 0;
        }
    }

    if(achou){
        *ri = i;
        *rm = m;
    }else{
        *ri = -1;
        *rm = -1;
    }

}
//baseado na solução USP
