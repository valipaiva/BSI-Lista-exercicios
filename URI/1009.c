/*Fa�a um programa que leia o nome de um vendedor, o seu sal�rio fixo e o total de vendas efetuadas por ele no m�s (em dinheiro).
Sabendo que este vendedor ganha 15% de comiss�o sobre suas vendas efetuadas, informar o total a receber no final do m�s,
com duas casas decimais.
O arquivo de entrada cont�m um texto (primeiro nome do vendedor) e 2 valores de dupla precis�o (double) com duas casas decimais,
representando o sal�rio fixo do vendedor e montante total das vendas efetuadas por este vendedor, respectivamente*/
#include<stdio.h>
int main()
{
    char nome;
    double salario_fixo,total_vendas,comissao;
    float total;

       printf ("Nome do vendedor:\n");
        scanf ("%s",&nome);

        scanf ("%lf%lf",&salario_fixo,&total_vendas);

   total =  salario_fixo + (total_vendas*0.15);

    printf ("TOTAL = %.2f",total);

    return 0;
}

