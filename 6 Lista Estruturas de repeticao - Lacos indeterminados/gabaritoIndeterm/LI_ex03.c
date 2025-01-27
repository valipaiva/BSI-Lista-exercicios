#include <stdio.h>

int main () {

    int i, q = 0;
    float numero,
          soma = 0.0;

    scanf("%f", &numero); //le o numero
    while(numero != -1000) { //laco de repeticao indeterminado

        if (numero > 0.0) { //se positivo
            soma = soma + numero; //soma dos positivos
            q++; //quantidade de positivos
        }
        scanf("%f", &numero); //le o numero
    }

    printf("%d valores positivos\n", q);
    printf("Media: %.1f\n", soma / q);

    return 0;
}

