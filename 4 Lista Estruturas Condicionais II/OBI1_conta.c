#include<stdio.h>
int main()
{
    int consumo,conta,franquia1,franquia2,franquia3;

    printf("Informe o consumo total em m3: \n");
    scanf("%d",&consumo);

    franquia1= 10;
    franquia2= 30;
    franquia3= 100;

    if (consumo <= 10){
        printf("Conta sera R$ 7");}
    else
    if (consumo >= 11 && consumo <=30){
        conta = 7 + (consumo-franquia1)*1;
        printf("Conta sera R$ %d",conta);
    }
    else
      if (consumo >= 31 && consumo <=100){
       conta = 7 + (franquia2-franquia1) + (consumo - franquia2)*2;
        printf("Conta sera R$ %d",conta);
    }
    else
       if (consumo >= 101){
        conta = 7+ (franquia2-franquia1) + (franquia3-franquia2)*2 + (consumo - franquia3)*5;
        printf("Conta sera R$ %d",conta);
    }
    return 0;
}
