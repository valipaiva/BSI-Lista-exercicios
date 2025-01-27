/*Leia um valor inteiro X (1 <= X <= 1000).
Em seguida mostre os ímpares de 1 até X, um valor por linha, inclusive o X, se for o caso..*/
#include <stdio.h>
int main()
{
    int i,num;

    scanf ("%d",&num);

    for (i=1; i<=num; i++){
        if (i % 2 == 1)
         printf("%d\n",i);
    }
 return 0;
}

