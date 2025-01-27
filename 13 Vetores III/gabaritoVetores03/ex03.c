#include<stdio.h>

#define N 8

void imprimeVetor(int v[], int tam);
int removeDuplicacoes(int v[], int tam);

int main()
{
    int v[]= {-1, 5, 5, 4, -1, 1, 7, 7};
    int soma, tam;

    imprimeVetor(v,N);
    tam = removeDuplicacoes(v, N);
    imprimeVetor(v,tam);

    return 0;
}

void imprimeVetor(int v[], int tam)
{
    int i;

    for(i=0; i<tam; i++)
        printf("%d ",v[i]);
    printf("\n");

}
int removeDuplicacoes(int v[], int tam)
{
    int i, j, k;

    for (i=0; i<tam; i++){
        for (j=i+1; j<tam; j++){
            if (v[i] == v[j]){
                for (k=j; k<tam; k++)
                    v[k] = v[k+1];
                tam--; //como removeu um elemento, deslocando todos os demais uma posição, precisa atualizar.
                j--;
            }
        }
    }
}
