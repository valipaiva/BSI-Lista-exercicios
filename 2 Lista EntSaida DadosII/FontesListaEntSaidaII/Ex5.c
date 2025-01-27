#include <stdio.h>
#include <math.h>

int main(void)
{
   int total,c1,c2,c3,r;
   scanf("%d",&total);
   scanf("%d", &c1);
   scanf("%d", &c2);
   scanf("%d", &c3);
   r=total;
   printf("\n%d celudas de %d\n",r/c1,c1);
   r = r%c1;
   printf("\n%d celudas de %d\n",r/c2,c2);
   r = r%c2;
   printf("\n%d celudas de %d\n",r/c3,c3);
   return 0;
}
