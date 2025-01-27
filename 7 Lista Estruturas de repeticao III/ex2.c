/*1³ = 1
  2³ = 3 + 5
  3³ = 7 + 9 + 11
  4³ = 13 + 15 + 17 + 19*/

#include<stdio.h>
main()
{
    int i,j,impar=1,n;

    scanf("%d",&n);

    for (i = 1; i <= n; i++){
        printf("\n%d^3 = ",i);

         for (j = 1; j <= i; j++){
            printf("+%d",impar);
            impar = impar + 2;
        }
    }

}
