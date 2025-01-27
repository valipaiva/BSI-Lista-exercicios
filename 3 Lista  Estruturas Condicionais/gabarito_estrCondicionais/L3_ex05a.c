#include <stdio.h>

int main()
{
    int inicio, fim, duracao;

    printf("Digite hora de inicio e de fim (sem minutos): ");
    scanf("%d %d", &inicio, &fim);

    if (inicio < fim)
        duracao = fim - inicio;
    else
        duracao = 24 - inicio + fim;

    printf("O jogo durou %d hora(s)\n", duracao);

    return 0;
}
