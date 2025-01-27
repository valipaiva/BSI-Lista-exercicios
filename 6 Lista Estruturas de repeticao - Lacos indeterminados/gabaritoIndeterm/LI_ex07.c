#include <stdio.h>

int main()
{
    srand(time(NULL)); //inicializacao da semente

    int n, //armazena o "chute" do usuário
        mag, //armazena o número sorteado
        i=1; //contador de tentativas. Inicializa em 1 porque a primeira tentativa é feita fora do laço

    mag = rand()%501; //sorteia valor entre 0 e 500
    printf("Valor sorteado eh (para ajudar nos testes): %d\n\n", mag); //imprime na tela para ajudar nos testes

    printf("Qual o numero magico? ");
    scanf("%d", &n);
    while(n != mag) //laco indeterminado! Não sabemos em quantas tentativas o usuário vai acertar
    {
        if (n == mag)
            printf("\nVc acertou em %d tentativas\n", i+1);
        else if (n <mag)
            printf("tente um numero maior\n");
        else
            printf("tente um numero menor\n");
        i++; //incrementa contador!

        printf("Qual o numero magico? ");
        scanf("%d", &n);
    }

    printf("Quantidade de tentativas: %d\n", i);

    printf ("\nClassificacao:\n");
    if (i <= 3)
        printf("\o/\n");
    else if (i <= 6)
        printf(":-D\n");
    else if (i <= 10)
        printf(":-)\n");
    else if (i > 10)
        printf(":-(\n");
    return 0;
}
