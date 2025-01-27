/*calcula e informa o volume de uma esfera */

#include <stdio.h>

int main()
{

   int raio,raiocubo;
   float pi=3.14159,volume;

   printf("Digite o valor do raio: ");
   scanf("%d",&raio);

   raiocubo = raio*raio*raio;

   volume = ((4.0/3.0)*pi*raiocubo);

   printf("O volume da esfera e: %.3f",volume);


   return 0;
}
