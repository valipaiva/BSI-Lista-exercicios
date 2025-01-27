/*. Escreva uma func˜ao que receba como entrada um numero de tres dıgitos e retorne o dıgito verificador calculado da
seguinte forma:
em que xi denota o i-esimo dıgito do numero. Prototipo:
int calculaDigitoVerificad
*/

#include <stdio.h>

int calculaDigitoVerificador(int num);

int main()
{
    int num, digito;

    printf("Digite o valor que deseja calcular o dígito verificador (tres digitos): ");
    scanf("%d", &num);

    //consistência dos dados de entrada
    while(num<100 || num >999)
    {
        printf("Digite o valor que deseja calcular o dígito verificador (tres digitos): ");
        scanf("%d", &num);
    }

    // chamada da função
    digito = calculaDigitoVerificador(num);
    printf("Resposta: %d-%d", num, digito);

    return 0;
}

int calculaDigitoVerificador(int num)
{
    int i, soma=0;

    for(i=3; i>0; i--) // fazemos um for ao invés de while porque o exercício determina que o valor de entrada tem três dígitos!!
    {
        soma = soma + num%10 * i; // usamos a variação decrescente do i para conseguir multiplicar o dígito pelo valor correspondente
        num = num/10; // atualiza o valor do num
    }

    return ((soma % 11) %10); //retorno da expressão
}
