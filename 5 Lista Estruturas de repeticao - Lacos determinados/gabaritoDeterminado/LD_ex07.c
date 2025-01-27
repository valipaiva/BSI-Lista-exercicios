#include <stdio.h>

int main () {

    int n, i,
        fat; //variável que armazena o fatorial

    printf("Digite n: ");
    scanf("%d", &n);

    fat = 1;
    for(i=1; i<=n; i++){
        fat = fat * i; // acumula o fatorial
    }

    printf("%d! eh %d \n", n, fat); // imprime o resultado

    return 0;
}

