#include <stdio.h>

int main()
{
    int n,
        i;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    for (i = 1; i < 10000; i++){ //laço de repetição para variar o i
        if(i%n==2) // caso o resto de i por n seja 2
            printf("%d\n", i); //imprime na tela
    }
    return 0;
}
