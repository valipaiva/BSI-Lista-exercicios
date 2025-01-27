#include <stdio.h>

int main()
{
 int diaN, mesN, anoN, diaH, mesH, anoH, idade;

    printf("Digite a data de nascimento: dd/mm/aaaa\n");
    scanf("%d/%d/%d",&diaN,&mesN,&anoN);
    printf("Digite a data de hoje: dd/mm/aaaa\n");
    scanf("%d/%d/%d", &diaH, &mesH, &anoH);

    if ((mesN > mesH) || ((mesN = mesH) && (diaN > diaH))){
       idade = anoH - anoN - 1;}

    else idade = anoH - anoN;

    printf("idade = %d", idade);

    return 0;
}
