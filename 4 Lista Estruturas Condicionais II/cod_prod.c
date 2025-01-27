#include<stdio.h>
int main()
{
char cod_prod;

    printf("Entre com o codigo do produto - letra maiuscula: \n");
    scanf("%c",&cod_prod);

    if (cod_prod == 'A'){
        printf("Lampada 60 W e o valor total e: R$8,40");} //1.2*7

    else
        if (cod_prod == 'B'){
           printf("Lampada 100 W e o valor e: R$12,50");} //2.5*5

           else
           if (cod_prod == 'C'){
              printf("Reator de partida lenta e o valor e R$177,00");}//59*3

              else
              if (cod_prod == 'D'){
                  printf("Reator de partida rapida e o valor e R$248,00");} // 124*2
    else
    printf("Produto não disponivel no estoque");

  printf("\nFim do programa");

return 0;
}
