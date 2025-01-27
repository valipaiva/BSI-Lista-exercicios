#include<stdio.h>
int main()
{
    int n,i,j;

    printf("Digite valor para n: ");
    scanf ("%d",&n);

    for (i = 1; i <= n; i++){
        printf("    %d", i);}

    for (i = 1; i <= n; i++){
        printf ("\n");
        printf ("%5d ",i);

        for (j = 1; j <= i; j++)
            printf (" %d ",i*j);

    }

    printf ("\n");


    return 0;
}
