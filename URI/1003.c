/*Leia dois valores inteiros, no caso para vari�veis A e B.
A seguir, calcule a soma entre elas e atribua � vari�vel SOMA. A seguir escrever o valor desta vari�vel.*/

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
