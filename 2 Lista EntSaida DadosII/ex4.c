/* calcular consumo medio em km/l com 3 casas apos a virgula*/

#include<stdio.h>

int main()
{
    int distancia;
    float combustivel,media;

    printf ("Informe total distancia percorrida: ");
    scanf ("%d",&distancia);

    printf ("Informe a quantidade de combustivel gasto: ");
    scanf ("%f",&combustivel);

    media = distancia/combustivel;

    printf ("Consumo medio e: %.3f km/l",media);

    return 0;

}
