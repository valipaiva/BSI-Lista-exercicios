#include <stdio.h>

int main ()
{

    int a, b, auxiliar, i, n;

    /*inicialização das variaveis a e b
    (que irao armazenar os dois valores
     intermediarios que serao somados)*/
    a = 0;
    b = 1;

    printf("Digite n: ");
    scanf("%d", &n);

    printf("Serie de Fibonacci:\n");
    printf("%d %d\n", a, b);
    for(i = 3; i <= n; i++){ //inicia em 2 pq os dois primeiros ja foram impressos
        auxiliar = a + b; // calcula o novo valor
        a = b; // atualiza variaveis
        b = auxiliar;

        printf("%d ", auxiliar);
    }

    return 0;
}

