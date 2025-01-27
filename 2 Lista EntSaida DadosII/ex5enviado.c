/*Faca um programa que leia um numero inteiro e informe com quais cedulas podemos representalo.
Suponha que estejam disponıveis apenas notas de R$ 50, R$5 e R$1. Exemplo de resposta: R$
218 = 4 cedulas de 50, 3 cedulas de 5 e 3 cedulas de 1*/

#include<stdio.h>
int main ()
{
 double valor,div50,div5,div1;

    printf("Digite um valor inteiro: ");
    scanf("%lf",&valor);

    div50 = valor/50.0;
    div5 = div50%5.0;
    div1 = (div5%5)/1.0;

    printf("%lf cedulas de 50, %lf cedulas de 5 e % cedulas de 1",div50,div5,div1);

    return 0;
}
