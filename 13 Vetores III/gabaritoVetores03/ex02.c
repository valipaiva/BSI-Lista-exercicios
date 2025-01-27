#include<stdio.h>
#define N 8
void ocorrenciasVetor_v1(float v[], int n, int *tot_dist);
int ocorrenciasVetor_v2(float v[], int n);

int main()
{
    float v[]={-1.7, 3.0, 0.0, 3.0, 0.0, -1.7, 2.3, -1.7};
    int soma, tot_dist, i;

    //imprime o conteúdo do vetor
    printf("sequencia: ");
    for(i=0;i<N;i++)
        printf("%.2f ",v[i]);
    printf("\n");

    //invoca a função que busca as ocorrências
    tot_dist = ocorrenciasVetor(v, N);
    printf("total distintos: %d\n\n",tot_dist);
    return 0;
}

int ocorrenciasVetor(float seq[], int n){

    int i, j,
        distintos = 0,
        vezes;

    for (i = 0; i < n; i++){
        //conta o numero de vezes que seq[i] aparece no vetor a partir da posição i
        vezes = 1;
        j = i + 1;
        while (j < n){
            if (seq[j] != seq[i])
                j++;
            else
            {
                vezes++;
                //quando repete, remove substituindo pelo conteúdo da última posição!
                n--;
                seq[j] = seq[n];
            }
        }
        printf("%.2f ocorre %d vezes\n", seq[i], vezes);
        distintos++;
    }

    return distintos;
}
