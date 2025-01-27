#include <stdio.h>


int main(void)
{
   int distKm, qtPedag;

   float gastoComb, gastoPedag;

   printf("Digite o distancia total percorrida (somente valor inteiro): ");
   scanf("%d", &distKm);
   printf("Digite q quantidade de pedagios no trecho percorrido: ");
   scanf("%d", &qtPedag);

   gastoComb = distKm/15.0 * 2.60; //1litro -> 15km, distKm /15 = total do consumo em litros
   gastoPedag = 8*qtPedag;
   printf("O gasto da viagem ao percorrer %d Km com %d pedagios (cada pedagio custo R$ 8,00) foi de R$ %.2f \n",distKm,qtPedag, gastoComb+gastoPedag);
   return 0;
}
