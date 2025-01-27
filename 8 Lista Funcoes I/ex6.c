/*Escreva uma func˜ao que recebe um caractere e retorna 1 se o caractere for uma letra maiuscula, 2 se for uma letra
minuscula, 3 se for um dıgito e 0 do contrario. Prototipo: int testaTipoChar (char c)*/

#include<stdio.h>
#include<ctype.h>
/*https://www.ime.usp.br/~pf/algoritmos/apend/ctype.h.html
*https://www.dcc.fc.up.pt/~nam/aulas/0001/pi/slides/slipi0011/node3.html

*islower () - Verifica se o caracter é minúsculo
*isupper () - Verifica se o caracter é uma letra maiúscula
*isdigit () - Verifica se é um dígito
*/
int testaTipo (char c)
{
    if (isdigit (c))
    return 3;

    else if (islower(c))
    return 2;

    else if (isupper(c))
    return 1;

    else
        return 0;
}
int main ()
{
    char x;

    printf ("Digite um numero, letra ou caractere:\n");
    scanf ("%c",&x);

    printf("\n%d", testaTipo(x)); //primeiro fiz com %c e nao imprime os numeros, pois testaTipo declarei como int

/* if (isdigit (x))
    printf ("3");

    else if (islower(x))
    printf("2");

    else if (isupper(x))
    printf("1");

    else
        printf("0");
*/

return 0;
}
