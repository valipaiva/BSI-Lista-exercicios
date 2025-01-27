/* Erro de execução na linha 6 do exercicio, pois para o %d não foi definido um tipo int como variavel,
vai retornar o que estiver no lixo, deveria ser printf("%c", aux);*/
#include<stdio.h>

int main ()
{
    char aux;

    printf("Digite um caracter: ");
    scanf("%c",&aux);
    printf("%d", aux);

    return 0;
}
