#include<stdio.h>

int main()
{
    float saldo, credito;
    //entrada
    printf("Digite o saldo médio: ");
    scanf("%f", &saldo);

    /*observe que, ao invés de implementar uma mensagem fprintf em cada bloco,
    optamos por criar uma variável chamada credito, a qual recebe o valor
    resultante!*/

    if (saldo < 201)
        credito = 0;
    else if (saldo >= 201 && saldo < 401) //no exercício, precisamos ficar atentos
                                          //aos intervalos, para colocar
                                          // corretamente < ou <= (> ou >=)
        credito = saldo * 0.2;
    else if (saldo >= 401 && saldo <= 600)
        credito = saldo * 0.3;
    else
        credito = saldo * 0.4;

    //impressão com duas casas de precisão!
    printf("O crédito é de %.2f\n\n", credito);

    return 0;
}
