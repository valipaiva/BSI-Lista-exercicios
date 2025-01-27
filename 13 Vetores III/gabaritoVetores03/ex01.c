#include<stdio.h>

void buscaSoma(int v[], int tam, int soma);

int main()
{
    int v[]={1, 2, 4, -1, 3, 0},
        soma;

    printf("Entre com a soma que deseja buscar: ");
    scanf("%d",&soma);

    buscaSoma(v,6,soma);

    return 0;
}

void buscaSoma(int v[], int tam, int soma)
{
    int i,j;


    for(i=0;i<tam;i++)
    {
        for(j=i+1;j<tam;j++) //começa em i+1 para evitar repetições
        {
            if(v[i]+v[j]==soma) //se encontrar a soma, imprime
                printf("%d + %d\n", v[i],v[j]);
        }
    }
}


