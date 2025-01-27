#include <stdio.h>
#define P1 2
#define P2 3
#define P3 5

int main(void)
{
   float n1, n2, n3,  media;

   printf("Digite as 3 notas");
   scanf("%f", &n1);
   scanf("%f", &n2);
   scanf("%f", &n3);


   media= (P1*n1 + P2*n2 + P3*n3)/(P1+P2+P3);
   printf("A média ponderada entre as notas %.2f %.2f %.2f é igual a %.2f", n1,n2,n3, media);
   return 0;
}
