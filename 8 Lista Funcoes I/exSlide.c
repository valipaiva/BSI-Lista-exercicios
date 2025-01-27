#include<stdio.h>
long int fatorial (int x)
{
    long int fat;
    int n;

    for (fat = 1; fat <= n; fat++)
        fat = fat*n;
    return (fat);
}

int main()
{
    int m,p,x,comb;
    long int fat1,fat2,fat3;

    scanf ("%d %d",&m,&p);
    if (m<p)
        printf ("combinacao indefinida\n");
    else if (m<0 || p<0)
            printf("não existe combinacao de numeros negativos\n");

    else
    {   fat1 = fatorial (m);
        fat2 = fatorial (p);
        fat3 = fatorial (m-p);
        comb = (fat1)/(fat2 * fat3);
        printf ("Combinacao = %d\n",comb);
    }
    return (0);
}
