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

    printf("Idade: %d e nasceu em um(a) ",idade);

    //formula em http://arcaz.dainf.ct.utfpr.edu.br/rea/files/original/b638596b01aae0a52c36e987c09ac053.pdf
    ds = (diaN + ((mesN+1)*26/10) + (anoN%100) + ((anoN%100)/4) + (anoN/400) + 5 * (anoN/100))%7;

    if(ds==0)
        printf("Sabado\n");
    else if(ds==1)
        printf("Domingo\n");
    else if(ds==2)
        printf("Segunda\n");
    else if(ds==3)
        printf("Terca\n");
    else if(ds==4)
        printf("Quarta\n");
    else if(ds==5)
        printf("Quinta\n");
    else if(ds==6)
        printf("Sexta\n");

    return 0;
}


