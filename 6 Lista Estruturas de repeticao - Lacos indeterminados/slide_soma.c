#include <stdio.h>
int main()
{
    int cont=1,soma=0,n,aux;

    scanf ("%d",&n);

    while (n != -1){
        scanf("%d",&n);
        soma++;
        cont++;
    }

    printf ("\nValor da soma: %d \nValor da media: %f",soma,(float)soma/cont);

return 0;
}

