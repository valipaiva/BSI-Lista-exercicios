#include <stdio.h>

int main()
{
 int diaN, mesN, anoN, diaH, mesH, anoH, idade,dia_semana;

    printf("Digite a data de nascimento: dd/mm/aaaa\n");
    scanf("%d/%d/%d",&diaN,&mesN,&anoN);
    printf("Digite a data de hoje: dd/mm/aaaa\n");
    scanf("%d/%d/%d", &diaH, &mesH, &anoH);

    if ((mesN > mesH) || ((mesN = mesH) && (diaN > diaH))){
       idade = anoH - anoN - 1;}

    else idade = anoH - anoN;

    printf("idade = %d", idade);}

    dia_semana=(diaN+((mesN+1)*13/5)+anoN%100 + ((anoN%100)/4) + (anoN/400) + 5*(anoN/100)%7);
    printf("dia da semana: %d",dia_semana);

    return 0;
}

