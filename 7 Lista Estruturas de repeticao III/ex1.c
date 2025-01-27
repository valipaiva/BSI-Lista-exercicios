#include<stdio.h>
main()
{
    int n,m,i,j;

    scanf ("%d",&n);
    scanf ("%d",&m);

    for (i = 1; i <= n; i++){
    printf ("\n");
        for (j = 1; j <= m; j++)
            printf ("%4d ",i);
    }

    printf ("\n");

}
