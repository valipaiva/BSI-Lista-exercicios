/*Escreva uma func˜ao que receba a data de nascimento de uma pessoa e retorne a sua idade em relac˜ao a data atual (que
deve ser lida do teclado dentro da func˜ao). Com base neste retorno, a func˜ao main() deve mostrar uma mensagem
indicando se a pessoa ja e maior de idade.
Prototipo: int retornaIdade(int diaNasc, int mesNasc, int anoNasc) ex02 da lista de Estruturas condicionais
*/
#include<stdio.h>
int retornaIdade(int diaN,int mesN,int anoN,int mesA,int diaA,int anoA)
{
    int idade;
    if ((mesN > mesA) || ((mesN = mesA) && (diaN > diaA)))
       idade = anoA - anoN -1;
    else idade = anoA - anoN;
    //printf("%d ",idade); //para testar a função
            return (idade);
}

int main()
{
    int idade,diaAtual,mesAtual,anoAtual,diaNasc,mesNasc,anoNasc;

    printf("Data atual DD/MM/AAAA: ");
    scanf("%d/%d/%d", &diaAtual, &mesAtual, &anoAtual);
    printf("Data de nascimento DD/MM/AAAA: ");
    scanf("%d/%d/%d", &diaNasc, &mesNasc, &anoNasc);

    if (retornaIdade(diaNasc,mesNasc,anoNasc,diaAtual,mesAtual,anoAtual) >= 18)
        printf("\nEh maior de idade");
}
