#include <stdio.h>

#define SENHA_CORRETA 2002

int main () {
    int senha;

    printf("Digite a senha: ");
    scanf("%d", &senha); // primeira leitura fora do laço

    while (senha != SENHA_CORRETA) {  // se senha não estiver correta
        printf("Senha Invalida\n");
        printf("Digite a senha: ");
        scanf("%d", &senha); // le novamente
    }

    printf("Acesso Permitido\n"); //se saiu do while, é pq a senha foi digitada corretamente!

    return 0;
}

