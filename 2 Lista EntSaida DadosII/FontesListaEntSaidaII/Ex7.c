#include <stdio.h>


int main(void)
{
   int num;


   printf("Digite um valor (inteiro base 10): ");
   scanf("%d", &num);
   printf("o ultimo digito de %d eh igual a %d", num, num%10);
   return 0;
}
