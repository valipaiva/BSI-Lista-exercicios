/*Escreva um programa que repita a leitura de uma senha ate que ela seja valida. Para cada leitura de senha incorreta
informada, escrever a mensagem "Senha Invalida". Quando a senha for informada corretamente deve ser impressa a
mensagem "Acesso Permitido" e o algoritmo encerrado. Considere que a senha correta e o valor 2002.*/
#include <stdio.h>
int main()
{
    int cont=0,senha;

    printf ("Insira a senha: ");
    scanf ("%d",&senha);

    while (senha != 2002){
        printf ("Senha Invalida\n");
        printf ("\nInsira a senha: ");
        scanf("%d",&senha);
        cont++;
    }
    printf("Acesso Permitido\n");
return 0;
}

