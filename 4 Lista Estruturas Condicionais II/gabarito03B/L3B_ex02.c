#include <stdio.h>
int main()
{
    int anoA, mesA, diaA,
        anoN, mesN, diaN,
        idade,
        ds;

    printf("Data atual (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &diaA, &mesA, &anoA);
    printf("Data de nascimento (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &diaN, &mesN, &anoN);

    idade = anoA - anoN; // calcula diferença dos anos
    //atualiza a idade caso ainda não tenha feito aniversario!
    if(mesA < mesN)
        idade = idade - 1; //pessoa ainda nao fez aniversario
    else if (mesA == mesN)
        if(diaA < diaN)
            idade = idade - 1; //pessoa ainda nao fez aniversario

    printf("Idade: %d ",idade);



    return 0;
}


