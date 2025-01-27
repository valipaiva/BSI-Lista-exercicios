#include<stdio.h>
#define N 5
int main()
{
    int i,j,vetA[N],vetB[N],igual=0;

    for (i=0; i<N; i++)
    {
        printf ("Digite vetor A[%d]: ",i);
        scanf ("%d",&vetA[i]);

        printf ("Digite vetor B[%d]: ",i);
        scanf ("%d",&vetB[i]);
    }
    for (i=0; i < N; i++)
        for (j=0; j < N; j++)
            if (vetA[i] == vetB[i]){
            igual =1;
        printf ("vetorA [%d] = vetorB [%d] = %d\n", i,j,vetA[i]);
    }

    if (igual == 0)
        printf ("Nenhum elemento em comum\n");

    return 0;
}
