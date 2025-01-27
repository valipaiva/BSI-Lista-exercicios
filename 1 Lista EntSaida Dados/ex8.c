/*Faca um programa que converta uma letra maiuscula em letra minuscula. Dica: explore o
resultado do exercıcio 6 e consulte a tabela ASCII*/
#include<stdio.h>

int main ()
{
 char letra;

    printf("Digite uma letra maiuscula: ");
    scanf("%c",&letra);

    printf("%c\n",letra+32);

    return 0;
}
