#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIM_MAX 10

/* Lê o tamanho de um vetor, aloca dinamicamente, e preenche com valores aleatórios. Retorna o
  o ponteiro para o vetor alocado e por referência o tamanho lido. Lembre-se de desalocar o vetor depois! */
int* preparaVetor (int *p_tamanho)
{
    int i, *vetor;

    printf ("Digite o numero de valores do vetor: ");
    scanf ("%d", p_tamanho);
    vetor = (int*) malloc (*p_tamanho * sizeof (int));

    for (i = 0; i < *p_tamanho; i++)
        (vetor) [i] = rand () % (LIM_MAX+1);

    return (vetor);
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

    vetor1 = preparaVetor (&tamanho1);
    vetor2 = preparaVetor (&tamanho2);

    imprimeVetor(vetor1, tamanho1);
    imprimeVetor(vetor2, tamanho2);

    /* São tamanho1 * tamanho2 elementos. */
    vetor_mul = (int*) malloc ( (tamanho1*tamanho2) * sizeof (int));

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
