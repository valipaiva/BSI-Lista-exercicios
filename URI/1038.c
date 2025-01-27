/*Com base na tabela abaixo,
escreva um programa que leia o código de um item e a quantidade deste item.
 A seguir, calcule e mostre o valor da conta a pagar.*/
#include<stdio.h>
#include<math.h>
int main()
{
    int cod,qtde;
    double total;

    scanf ("%d %d",&cod,&qtde);

    if (cod == 1)
        total = 4.00 * qtde;
         else
             if (cod == 2)
                total = 4.50 * qtde;
            else
                if (cod == 3)
                   total = 5.00 * qtde;
                else
                    if (cod == 4)
                        total = 2.00 * qtde;
                    else
                        if (cod == 5)
                            total = 1.50 * qtde;

    printf("Total: R$ %.2lf\n",total);

               return 0;
}
