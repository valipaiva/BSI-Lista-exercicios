#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, // valor lido
        m, // valor lido
        i, // contador
        j; // contador

//entrada de dados
    printf("digite o valor de n: ");
    scanf("%d", &n);
    printf("\ndigite o valor de m: ");
    scanf("%d", &m);


    /* A lógica consiste em variar i de 1 até n e, para cada i, variar j de 1 até m.
       Para cada par (i, j), imprimir i*j */
    for (i = 1; i <= n; i++)
    {
        printf("\n");

        //variação do j
        for (j = 1; j <= m; j++)
            printf("%5d", i*j);
    }
    return 0;
}
