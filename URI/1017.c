#include<stdio.h>

int main()
{
    int km,hora;
    float litro;

    printf("Digite o tempo gasto na viagem: \n");
    scanf("%d",&hora);

    printf("Digite a velocidade media (km/h): \n");
    scanf("%d",&km);

    litro = hora*km / 12.0; // quantidade de litros = hora * km / 12 pq o carro faz 12km/h

    printf("%.3f",litro);

return 0;
}
