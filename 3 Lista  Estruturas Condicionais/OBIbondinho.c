#include<stdio.h>
int main()
{
    int alunos,monitores,soma;

    printf("Informe a quantidade de alunos: ");
    scanf("%d",&alunos);

    printf("Informe a quantidade de monitores: ");
    scanf("%d",&monitores);

    soma = alunos+monitores;

    if (soma<=50){
    printf("S");
    }
    else {
        printf("N");
    }

    return 0;
}
