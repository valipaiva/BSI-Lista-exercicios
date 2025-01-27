#include <stdio.h>

int main()
{
    int n,
        i;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++){ //laço de repetição para variar o i
        printf("%d x %d = %d \n", n, i, n*i); //imprime na tela
    }
    return 0;
}
