#include <stdio.h>
#include <stdlib.h>

#define N 10

int main ()
{
    int valores [N];
    int i;
    int n_valores = N; /* O vetor come�a com N valores, depois perde alguns. */
    int pos;

    srand(time(NULL));//inicializa��o da semente

    // Preenche e mostra o vetor.
    for (i = 0; i < N; i++)
    {
        valores [i] = rand ()%10;
        printf ("%d %d\n", i, valores [i]);
    }
    printf ("\n");

    // Pede o �ndice do valor a remover
    printf ("Que posi��o deseja remover? ");
    scanf ("%d", &pos);

    if(pos >= n_valores)
    {
        printf("Erro!! Posi��o inv�lida!!");
        return;
    }

    // Desloca todos os valores a partir da posi��o dada para a esquerda.
    for (i = pos+1; i < n_valores; i++)
        valores [i-1] = valores [i];

    // Mostra o vetor resultante
    for (i = 0; i < N-1; i++)
        printf ("%d %d\n", i, valores [i]);

    return 0;
}
