#include<stdio.h>

int retornaResto(int alexandre, int maria, int rafael);
void imprimeVencedor(int res);

int main()
{

    int alexandre, maria, rafael, res;

    printf("Digite o n�mero jogado por Alexandre: ");
    scanf("%d", &alexandre);
    printf("Digite o n�mero jogado por Maria: ");
    scanf("%d", &maria);
    printf("Digite o n�mero jogado por Rafael: ");
    scanf("%d", &rafael);

    //soma os n�meros digitados e calcula o resto por 3.
    res = retornaResto(alexandre, maria, rafael);
    imprimeVencedor(res);

    return 0;
}

int retornaResto(int alexandre, int maria, int rafael)
{
    return(alexandre+maria+rafael)%3;
}

void imprimeVencedor(int res)
{
    if(res==0)
        printf("Alexandre!! - resto 0");
    else if(res==1)
        printf("Maria!! - resto 1");
    else //como os �nicos poss�veis valores s�o 0, 1 e 2, podemos colocar o else sem precisar testar else if(res==2)
        printf("Rafael!! - resto 2");

}
