/*Faca uma funçao que receba como argumento um numero natural que representa um valor na base binaria e o retorne
 * na base decimal
 */
#include<stdio.h>

int binario2Decimal(int valor);

int main()
{
    int binario,aux;

    printf("Digite o numero na base binaria: ");
    scanf("%d",&binario);

    aux = binario2Decimal(binario);
    printf("\n%d",aux);

    return 0;
}

int binario2Decimal(int valor)
{
    int potencia = 1, total=0;

    while (valor > 0)
    {   total = total + valor % 10 * potencia;
        valor = valor/10;
        potencia = potencia*2;
    }
    return total;
}




