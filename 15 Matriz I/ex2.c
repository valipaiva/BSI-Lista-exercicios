#include<stdio.h>
#define tam 2

int main ()
{
    int i,j,mat[tam][tam],somalinha,somacoluna,linha,coluna;

    //leitura matriz
    printf("Insira valores da matriz:\n");
    for (i=0; i<tam; i++)
    {   for (j=0; j<tam;j++)
        scanf ("%d",&mat[i][j]);
    }

    //imprimir matriz
    for (i=0; i<tam; i++)
    {   for (j=0; j<tam;j++)
        printf ("%d ",mat[i][j]);

        printf("\n");
    }

    printf ("Defina linha que deseja somar: ");
    scanf ("%d", &linha);
    printf ("Defina coluna que deseja somar: ");
    scanf ("%d", &coluna);

    if (linha != coluna)
    {



    }


return 0;
}
