#include <stdio.h>

int main()
{
    int a, b, c, d;

    //L� os valores de entrada
    printf("Digite quatro valores (inteiros): ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    //Testa as condicoes
    if (b > c &&  d > a && (c + d) > (a + b) &&  c > 0 &&  d > 0 && (a % 2) == 0)
            printf("Valores aceitos\n");
    else
        printf("Valores nao aceitos\n");

    return 0;
}
