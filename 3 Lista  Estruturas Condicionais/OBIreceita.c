#include<stdio.h>
int main()
{
    int trigo,ovos,leite,val1,val2,val3;

    printf("Digite a quantidade de trigo, ovos e leite, respectivamente\n");
    scanf("%d%d%d",&val1,&val2,&val3);

    trigo = val1/2;
    ovos = val2/3;
    leite = val3/5;

    if (trigo<=ovos && trigo<=leite){
        printf("A quantidade maxima de bolo e:%d",trigo);
    }
    else
    if (ovos<=trigo && ovos<=leite){
        printf("A quantidade maxima de bolo e:%d",ovos);
    }
    else
        printf("A quantidade maxima de bolo e:%d",leite);

    return 0;
}
