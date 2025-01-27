//Dado um numero natural na base decimal, transforma-lo para a base binaria.
#include<stdio.h>

int decimal2binario(int valor);

int main()
{
    int decimal,aux;

    printf("Digite o numero na base binaria: ");
    scanf("%d",&decimal);

    aux = decimal2binario(decimal);
    printf("\n%d",aux);

    return 0;
}

int decimal2binario(int valor)
{
    int potencia = 1, total=0;

    while (valor > 0)
    {   total = total + valor % 2 * potencia;
        valor = valor/2;
        potencia = potencia*10;
    }
    return total;
}




