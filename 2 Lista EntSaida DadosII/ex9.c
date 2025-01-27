/* gasto de uma viagem de carro de uma cidade a outra
O carro utilizado roda 15 Km com 1 litro de gasolina.
O preco da gasolina e de R$2,60.
O valor de cada pedagio e de R$8,00.
Seu programa deve receber a distancia e a quantidade de pedagios entre as cidades*/

#include <stdio.h>
int main()
{
    int km, pedagio;
    float litro,gasolina,gasto_pedagio,soma;

    printf("Distancia entre duas cidades em KM: ");
    scanf ("%d",&km);

    printf("Quantidade de pedagios: ");
    scanf ("%d",&pedagio);

    litro = km/15;

    gasolina = litro*2.6;

    gasto_pedagio = pedagio*8.0;

    soma =gasolina+gasto_pedagio;

    printf ("O gasto total e: %.2f",soma);

    return 0;
}

