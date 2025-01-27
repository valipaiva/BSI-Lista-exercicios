/* Erro de execu��o na linha 6 no exercicio, pois %f nao foi definido um tipo float como variavel,
vai retornar o que estiver no lixo, deveria ser printf("%d", aux);*/

#include<stdio.h>

int main ()
{
    int aux;

    printf("Digite um numero inteiro: ");
    scanf("%d",&aux);
    printf("%f", aux);

    return 0;
}

