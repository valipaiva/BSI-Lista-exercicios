/*Crie um programa que declare e inicialize (com valores lidos do teclado) um vetor de 5 posicoes. Depois, dados dois
inteiros i e j, troque os elementos das posicoes i e j entre si.
*/
#include<stdio.h>

int main()
{
    int v[5], i, j, aux;

    for(i=0; i<5; i++){
        printf("Digite valor: ");
        scanf("%d", &v[i]);
    }

    printf("Digite posição i: ");
    scanf("%d", &i);
    printf("Digite posição j: ");
    scanf("%d", &j);

    if(i<0 || i>4 || j<0 || j>4){
        printf("Indices inválidos");
        return 0;
    }

    aux = v[i];
    v[i] = v[j];
    v[j] = aux;

    for(i=0; i<5; i++)
        printf("%d ", v[i]);

    return 0;

}



