#include<stdio.h>
int main()
{
    int moeda,c100,c50,c20,c10,c5,c2,c1;

    printf("Valor R$: ");
    scanf("%d",&moeda);

    c100 = moeda/100;
    c50 = (moeda%100)/50;
    c20 = ((moeda%100)/50)%20;
    c10 = (((moeda%100)/50)%20)%10;
    c5 = c10%5;
    c2 = c5%2;
    c1 = c2;

    printf("\n%d notas de R$100,00 \n%d notas de R$50,00 \n%d notas de R$20,00 \n", c100,c50,c20);
    printf("\n%d notas de R$10,00 \n%d notas de R$5,00 \n%d notas de R$2,00 \n%d notas de R$1,00 \n", c10,c5,c2,c1);
return 0;
}
