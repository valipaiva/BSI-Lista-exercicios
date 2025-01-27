/*Crie um programa que declare e inicialize (com valores aleatorios) um vetor de 30 posicoes. Depois, guarde os
elementos na ordem inversa em um outro vetor de saida (ou seja, o elemento da posicao 0 e armazenado na posicao
29, o da posicao 1 na posicao 28, e assim por diante). Desafio: voc^e consegue "inverter" o conteudo de um vetor
sem utilizar um vetor auxiliar?
*/
#include<stdio.h>

int main()
{
    int input[30], output[30], i, j, aux;

    for(i=0; i<30; i++)
        input[i] = rand()%15;

    for(i=0; i<30; i++)
        output[i] = input[30-i-1]; /*também é possível usar uma variável auxiliar
                                    (inicializada em 29 e decrementada de 1 a cada iteração)
                                    para controlar o indice do vetor input.*/

    printf("Input: ");
    for(i=0; i<30; i++)
        printf("%d ", input[i]);

    printf("\nOutput: ");
    for(i=0; i<30; i++)
        printf("%d ", output[i]);
    return 0;

}



