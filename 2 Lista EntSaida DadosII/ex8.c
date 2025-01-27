/*receba o valor de uma temperatura em graus Celsius (C) em Farenheit (F)*/

#include<stdio.h>
int main()
{
    int cel,far;

    printf ("Digite o valor da temperatura em graus Celsius: ");
    scanf ("%d",&cel);

    far = (cel*9/5)+32;

    printf ("O valor convertido em grau Farenheit e: %d F",far);

    return 0;
}
