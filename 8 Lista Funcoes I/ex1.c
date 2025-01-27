/*. Escreva uma func˜ao que recebe como parametro um inteiro positivo e retorna 1 se ele representar um ano bissexto ou
0 caso contrario. Um ano e bissexto se ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0). Prototipo:int ehBissexto(int ano)*/

#include <stdio.h>
//funcao para testar se verdadeiro ou falso o ano bissexto
int ehBissexto(int x){
    if(x%400==0 || x%4==0 && x%100!=0)
        return 1;
    else
        return 0;
}
int main()
{
    int ano;
    int ehBissexto(int ano);

    printf("Digite um ano: ");
    scanf("%d",&ano);

    if (ehBissexto(ano) == 1)
        printf("%d eh bissexto",ano);
        else
            printf("%d nao eh bissexto",ano);
return 0;
}
