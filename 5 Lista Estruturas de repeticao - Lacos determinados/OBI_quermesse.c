
#include<stdio.h>
int main()
{
    int ingresso,pessoa_total,aux;

    scanf("%d",&pessoa_total);
    ingresso=1;

    while (ingresso<=pessoa_total){
        scanf("%d",&aux);
            if (ingresso == aux){
                printf("%d ganhou!",aux);
            }
            ingresso = ingresso+1;
    }
    return 0;
}
