/*Leia um valor inteiro entre 1 e 12, inclusive. Correspondente a este valor,
deve ser apresentado como resposta o mês do ano por extenso,com a primeira letra maiúscula.*/
#include<stdio.h>
int main()
{
   int mes;

    scanf ("%d",&mes);

    if (mes == 1)
        printf("Janeiro");

        else if (mes == 2)
        printf("Fevereiro");

            else if (mes == 3)
            printf("Marco");

               else if (mes == 4)
                printf("Abril");

    else if (mes <= 0 || mes > 12)
        printf("Mes invalido");

    return 0;
}
