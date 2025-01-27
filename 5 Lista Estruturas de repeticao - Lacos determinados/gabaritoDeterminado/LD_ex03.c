#include <stdio.h>

int main () {


    int x, y,
        qtdeImpares,
        i;

    printf("Digite o maior valor: ");
    scanf("%d", &x);
    printf("Digite o menor valor: ");
    scanf("%d", &y);

    qtdeImpares = 0;

    for(i=y+1; i<x; i++){ // varia o i entre y e x (mas não considera os valores de y e x)
        if(i % 2 == 1) // se for impar
            qtdeImpares++; // conta
    }

    printf("A quantidade de impares entre %d e %d eh %d. \n", y, x, qtdeImpares);
    return 0;
}

