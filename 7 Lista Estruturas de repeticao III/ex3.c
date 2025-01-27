/*Dado n maior que zero e inteiro, imprimir o gráfico da função
 para x**2 + x + 1 para x = -n ate n
 eixo das ordenadas na horizontal e eixo das abscissas na vertical */
#include <stdio.h>
int main()
{
    int n, i,j;

    printf("digite o valor de n:");
    scanf("%d", &n);

    for (i = -n; i <= n; i++) {
        printf("\n%d", i);

        for (j = 1; j <= i*i + i; j++)
            printf(".");//imprime tantos pontos quantos for o valor da função
            printf("*");//imprime asterisco
    }
    return 0;
}
