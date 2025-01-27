/*Escreva um procedimento que recebe um inteiro n por parametro e imprime na tela a sua tabuada.
void imprimeTabuada(int num)*/

#include<stdio.h>
int imprimeTabuada (int num)
{
    int cont;
    for (cont = 1; cont<= 10 ; cont++)
        printf("%d\n",cont*num);
}


int main ()
{
    int n,tabuada;

    printf("Digite o numero para calcular tabuada: ");
    scanf("%d",&n);

    tabuada = imprimeTabuada(n);

return 0;
}
