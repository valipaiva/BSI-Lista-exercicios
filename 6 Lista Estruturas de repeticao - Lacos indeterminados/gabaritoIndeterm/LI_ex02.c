#include <stdio.h>

#define SENHA_CORRETA 2002

int main () {
    int senha;

    printf("Digite a senha: ");
    scanf("%d", &senha); // primeira leitura fora do la�o

    while (senha != SENHA_CORRETA) {  // se senha n�o estiver correta
        printf("Senha Invalida\n");
        printf("Digite a senha: ");
        scanf("%d", &senha); // le novamente
    }

    printf("Acesso Permitido\n"); //se saiu do while, � pq a senha foi digitada corretamente!

    return 0;
}

