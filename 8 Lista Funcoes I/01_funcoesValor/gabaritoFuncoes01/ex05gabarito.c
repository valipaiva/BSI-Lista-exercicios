/*Escreva uma fun�c�ao que recebe dois inteiros n1 e n2 por par�ametro e retorna o maior de dois n�umeros. Desafio: na
fun�c�ao principal, determine o maior de tr�es n�umeros usando apenas duas chamadas `a fun�c�ao definida.
int retornaMaior(int n1, int n2)
*/
#include <stdio.h>

int retornaMaior(int n1, int n2);

int main()
{
    int num1, num2, num3, maior;

    printf("Digite os tres valores de entrada: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    maior = retornaMaior(num1, retornaMaior(num2, num3));
    printf("O maior eh: %d", maior);

    //lembre-se que poder�amos fazer a chamada � fun��o diretamente a partir do printf
    //printf("O maior eh: %d", retornaMaior(num1, retornaMaior(num2, num3)));

    return 0;
}

int retornaMaior(int n1, int n2)
{
    // assumimos que, se os valores forem iguais, qualquer um � maior!
    if (n1>n2)
          return n1;
    else
          return n2;
}
