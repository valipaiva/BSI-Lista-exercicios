/*Leia um n�mero inteiro que representa um c�digo de DDD para discagem interurbana.
Em seguida, informe � qual cidade o DDD pertence, considerando a tabela abaixo:*/
#include<stdio.h>
int main()
{
   int ddd;

    scanf ("%d",&ddd);

    if (ddd == 11)
        printf("Sao Paulo");

        else if (ddd == 61)
        printf("Brasilia");

            else if (ddd == 41)
            printf("Curitiba");

                else if (ddd == 21)
                printf("Rio de Janeiro");
    else
        printf("DDD nao cadastrado");

    return 0;
}
