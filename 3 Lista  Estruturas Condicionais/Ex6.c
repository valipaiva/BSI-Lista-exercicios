/*Um banco concedera um credito especial aos seus clientes que depende do saldo medio no ultimo ano.
Construa um programa que leia o saldo medio e calcule o valor do credito segundo os criterios da tabela abaixo.
Depois, mostre uma mensagem informando o resultado.*/
#include<stdio.h>
int main()
{
    float saldo;

    printf("Informe o saldo medio no ultimo ano: ");
    scanf("%f",&saldo);

    if (saldo <= 200.99){
        printf("Credito especial nao aprovado");
    }

    if (saldo >= 201.00 && saldo <= 400.99){
        printf("Credito especial 20%");
    }

    if (saldo >= 401.00 && saldo <= 600){
        printf("Credito especial 30%");
    }

    if (saldo > 600){
        printf("Credito especial 40%");
    }

    return 0;
}
