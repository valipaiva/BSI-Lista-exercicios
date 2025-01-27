#include <stdio.h>

int main () {
    int n, maior;


    maior = 0; // inicializa com maior valor possível no conjunto de dados valido

    printf("Digite o valor: ");
    scanf("%d", &n); // digita primeiro valor fora do laço

    while (n != -1) { // enquanto for diferente de -1
        if (n > maior) // comapra
            maior = n;
        printf("Digite o valor: "); 
        scanf("%d", &n); // le proximo valor
    }

    printf("Maior valor: %d\n", maior);

    return 0;
}

