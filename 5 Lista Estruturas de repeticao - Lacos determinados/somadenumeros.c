//Soma de n numeros


#include <stdio.h>
int main() {
    int n, i;
    double aux, soma = 0;

    printf("Quantidade de numeros: ");
    scanf("%d", &n);

        for (i = 1; i <= n; i++) {
            printf("Digite um numero: ");
            scanf("%lf", &aux);
            soma = soma + aux;
        }
    printf("Soma dos numeros: %.2f\n", soma);
return 0;
}

