/*3. Escreva um procedimento que recebe um inteiro n por parˆametro e imprime na tela a sua tabuada.
*void imprimeTabuada(int num)
*/
#include <stdio.h>

void imprimeTabuada(int num);

int main()
{
    int num;

    printf("Digite o valor que deseja imprimir a tabuada: ");
    scanf("%d", &num);

    imprimeTabuada(num);

    return 0;
}

void imprimeTabuada(int num)
{
    int i;

    for(i=0; i<10; i++)
        printf("%d x %d = %d\n", num, i, num*i);
}
