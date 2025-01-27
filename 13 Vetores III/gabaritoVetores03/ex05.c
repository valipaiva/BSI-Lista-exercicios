#include<stdio.h>
#define N 5
int subSomaZero(int v[], int tam, int *ini, int *fim);
void imprimeVetor(int v[], int tam);


int main()
{
    int v[]= {4, 2, -3, 1, 6};
    int ini, fim, i;

    imprimeVetor(v, N);
    if(subSomaZero(v, N, &ini, &fim) == 1){
        for(i=ini; i<=fim; i++)
            printf("%d ", v[i]);
    }
    else
        printf("Nao existe subvetor com soma zero\n");
    return 0;
}

void  imprimeVetor(int v[], int tam)
{
    int i;

    for(i=0; i<tam; i++)
        printf("%d ", v[i]);

    printf("\n");
}

int subSomaZero(int v[], int tam, int *ini, int *fim)
{
    int soma;
    int i,j,
        ind=0;

    //faça o teste de mesa para entender o código!!
    for(i=0; i<tam; i++)
    {
        soma=0;
        *ini=i;

        for(j=i; j<tam; j++)
        {
            soma = soma + v[j];
            if(soma==0){
               ind = 1;
               *fim=j;
               return 1;
            }

        }
    }
    return 0; // se chegou aqui é pq não teve soma 0
}
