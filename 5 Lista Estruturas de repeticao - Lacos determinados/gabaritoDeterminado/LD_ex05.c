#include <stdio.h>

int main () {

    int i, q = 0;
    float numero,
          soma = 0.0;

    for (i = 0; i < 6; i++) { //laco de repeticao
        scanf("%f", &numero); //le o numero

        if (numero > 0.0) { //se positivo
            soma = soma + numero; //soma dos positivos
            q++; //quantidade de positivos
        }
    }

    printf("%d valores positivos\n", q);
    printf("Media: %.1f\n", soma / q);

    return 0;
}

