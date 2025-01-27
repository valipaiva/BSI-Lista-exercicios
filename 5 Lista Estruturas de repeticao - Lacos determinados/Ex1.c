#include<stdio.h>
int main()
{
    int n,tabuada;

    printf("Digite o numero: ");
    scanf("%d",&n);
    tabuada = 0;

        while (tabuada<10){

            tabuada = tabuada+1;
            printf("%d\n",n*tabuada);
        }

return 0;
}
