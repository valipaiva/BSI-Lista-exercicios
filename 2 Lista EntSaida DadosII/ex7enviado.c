/*7. (desafio) Faca um programa que, dado um numero inteiro como entrada, retorne seu ultimo dıgito*/
#include<stdio.h>

int main ()
{
  int val,dig;

    printf("Digite um numero real inteiro: ");
    scanf("%d",&val);

    dig = val%10;
    printf("%d",dig);

    return 0;
}

