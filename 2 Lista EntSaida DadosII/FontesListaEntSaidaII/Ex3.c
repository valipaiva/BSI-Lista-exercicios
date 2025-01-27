#include <stdio.h>


int main(void)
{
   int a, b, c,  maior;

   printf("Digite 3 valores inteiros (separados por ENTER)");
   scanf("%d", &a);
   scanf("%d", &b);
   scanf("%d", &c);


   maior= (a+b + abs(a-b))/2;//maior entre a e b
   maior = (c+maior + abs(c-maior))/2;  // maior entre c e (a e b)
   printf("\n%d eh maior\n", maior);
   return 0;
}
