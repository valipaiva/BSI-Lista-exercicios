#include <stdio.h>


int main(void)
{
   float c,f;


   printf("Digite a temperatura em graus Celsius: ");
   scanf("%f", &c);
   f = c*9.0/5.0 + 32;     //c=(f-32)*5/9
   printf("a temperatura de %.2f graus Celsius corresponde a %.2f graus Farenheit",c,f);
   return 0;
}
