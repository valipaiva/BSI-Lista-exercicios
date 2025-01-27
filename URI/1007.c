/*Leia quatro valores inteiros A, B, C e D.
A seguir, calcule e mostre a diferenca do produto de A e B pelo produto de C e D segundo a fórmula:
DIFERENCA = (A * B - C * D)*/

#include <stdio.h>
int main()
{
    int A,B,C,D,diferenca;

    scanf ("%d\n",&A);
    scanf ("%d\n",&B);
    scanf ("%d\n",&C);
    scanf ("%d",&D);

    diferenca = (A*B)-(C*D);

    printf("DIFERENCA = %d",diferenca);

    return 0;
}

