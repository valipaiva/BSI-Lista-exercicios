#include<stdio.h>

int main()
{
    float saldo, credito;
    //entrada
    printf("Digite o saldo m�dio: ");
    scanf("%f", &saldo);

    /*observe que, ao inv�s de implementar uma mensagem fprintf em cada bloco,
    optamos por criar uma vari�vel chamada credito, a qual recebe o valor
    resultante!*/

    if (saldo < 201)
        credito = 0;
    else if (saldo >= 201 && saldo < 401) //no exerc�cio, precisamos ficar atentos
                                          //aos intervalos, para colocar
                                          // corretamente < ou <= (> ou >=)
        credito = saldo * 0.2;
    else if (saldo >= 401 && saldo <= 600)
        credito = saldo * 0.3;
    else
        credito = saldo * 0.4;

    //impress�o com duas casas de precis�o!
    printf("O cr�dito � de %.2f\n\n", credito);

    return 0;
}
