/*Leia dois valores inteiros, no caso para variáveis A e B.
A seguir, calcule a soma entre elas e atribua à variável SOMA. A seguir escrever o valor desta variável.*/

#include <stdio.h>

int main ()
{

    int A,B,soma;

    scanf("%d",&A);
    scanf("%d",&B);

    soma = A+B;

    printf("SOMA = %d\n",soma);

    return 0;
}
