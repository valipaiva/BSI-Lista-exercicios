#include <stdio.h>

int main()
{
    srand(time(NULL)); //inicializacao da semente

    int n, //armazena o "chute" do usu�rio
        mag, //armazena o n�mero sorteado
        i=1; //contador de tentativas. Inicializa em 1 porque a primeira tentativa � feita fora do la�o

    mag = rand()%501; //sorteia valor entre 0 e 500
    printf("Valor sorteado eh (para ajudar nos testes): %d\n\n", mag); //imprime na tela para ajudar nos testes

    printf("Qual o numero magico? ");
    scanf("%d", &n);
    while(n != mag) //laco indeterminado! N�o sabemos em quantas tentativas o usu�rio vai acertar
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
