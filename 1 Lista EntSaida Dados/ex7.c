#include<stdio.h>

int main ()
{
 float n1,n2, aux;

    printf("Digite primeiro valor: ");
    scanf("%f",&n1);

    printf("Digite segundo valor: ");
    scanf("%f",&n2);

    aux = n1 + n2;
    printf("%.2f",aux);

    return 0;
}
