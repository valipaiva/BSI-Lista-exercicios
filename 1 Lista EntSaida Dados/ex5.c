/*Complete o programa abaixo de forma a ler do teclado dois valores em ponto utuante, armazenando
os nas variaveis n1 e n2. Observe que o programa calcula a soma de n1 e n2, atribuindo o resultado
 na variavel aux. Imprima o valor de aux com apenas duas casas decimais- dica: a funcao printf
 possui opcoes de formatacao para esta finalidade!*/
#include<stdio.h>

int main ()
{
    float n1,n2,aux;

    printf("Digite primeiro valor: ");
    scanf("%f",&n1);

    printf("Digite segundo valor: ");
    scanf("%f",&n2);

    aux = n1 + n2;
    printf("%.2f",aux);

    return 0;
}

