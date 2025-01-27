//*Faca um programa que leia dois valores do teclado, n1 e n2, e calcule o MMC entre n1 e n2.

#include <stdio.h>
int main()
{
    int val1,val2,aux,mmc;

    printf("Valor 1: ");
    scanf ("%d",&val1);

     printf("Valor 2: ");
    scanf ("%d",&val2);

    while (val2>0){
        aux = val2;
        val2 = val1%val2;
        val1 = aux;
        }

    mmc = (val1*val2)/aux;
    printf("MMC = %d",mmc);

return 0;
}

