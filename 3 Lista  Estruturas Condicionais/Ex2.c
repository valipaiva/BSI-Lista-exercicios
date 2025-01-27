/*Faca um programa que leia do teclado um ano e imprima na tela se ele e ou n˜ao bissexto.
Obs.: um ano sera bissexto se: (a) for divisıvel por 400 OU (b) se for divisıvel por 4 e n˜ao o for por 100.
Voce deve fazer este exercıcio usando apenas apenas uma estrutura if-else. Dica: explore o uso dos operadores logicos!*/
#include<stdio.h>
int main()
{
    int ano,div;

    printf("Digite o ano: ");
    scanf("%f",&ano);

    if ((ano%4 == 0 && ano/100 != 0)){
        if(ano%400 == 0)
        printf("Ano bissexto");
    }
    else
    printf("Nao e ano bissexto");

    return 0;
}
