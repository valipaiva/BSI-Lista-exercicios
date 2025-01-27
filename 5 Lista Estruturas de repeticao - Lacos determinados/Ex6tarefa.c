/*Construa um programa que leia um numero inteiro positivo n, verifica e informa se o mesmo e perfeito ou n˜ao.
Dizemos que n e perfeito se a soma de todos os divisores positivos proprios - excluindo ele mesmo - e igual a n*/

#include<stdio.h>
int main()
{
    int num,divisor,soma;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d",&num);

    divisor=num;
        while(divisor>0){
            if (num%divisor == 0){
            printf("%d ",divisor);}
            divisor = divisor-1;
        }

    return 0;
}
