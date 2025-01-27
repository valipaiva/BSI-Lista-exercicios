#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIM_MAX 10

/* Lê o tamanho de um vetor, aloca, e preenche com valores aleatórios. Retorna o
  tamanho dado. Lembre-se de desalocar o vetor depois! */
int * preparaVetor (int** p_vetor)
{
    int i, tamanho;

    printf ("Digite o numero de valores do vetor: ");
    scanf ("%d", &tamanho);
    *p_vetor = (int*) malloc (tamanho * sizeof (int));

    for (i = 0; i < tamanho; i++)
        (*p_vetor) [i] = rand () % (LIM_MAX+1);

    return (tamanho);
}

void imprimeVetor(int *v, int tam)
{

     int i;
     for (i = 0; i < tam; i++)
        printf("  %d  ",v[i]);
     printf("\n");

}

int main ()
{
    int i, j, tamanho1, tamanho2;
    int *vetor1, *vetor2, *vetor_mul;

    tamanho1 = preparaVetor (&vetor1);
    tamanho2 = preparaVetor (&vetor2);

    imprimeVetor(vetor1, tamanho1);
    imprimeVetor(vetor2, tamanho2);

    /* São tamanho1 * tamanho2 elementos. */
    vetor_mul = (int*) malloc (sizeof (int) * tamanho1 * tamanho2);

    /* Para cada valor no vetor1... */
    for (i = 0; i < tamanho1; i++)
    {
        /* ... e cada valor no vetor2... */
        for (j = 0; j < tamanho2; j++)
        {
            /* A posição em vetor_mul é dada pelo número de vezes que já
               percorremos o vetor2 + a posição atual no vetor2. */
            int pos_mul = i*tamanho2 + j;

            /* Calcula e mostra. */
            vetor_mul [pos_mul] = vetor1 [i] * vetor2 [j];
            printf ("%d * %d = %d\n", vetor1[i], vetor2[j], vetor_mul[pos_mul]);
        }
    }

    free (vetor1);
    free (vetor2);
    free (vetor_mul);
    return (0);
}
//solução Bogdan
