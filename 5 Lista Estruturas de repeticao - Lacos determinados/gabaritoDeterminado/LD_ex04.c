#include <stdio.h>

int main () {

    int n, i;
    float  a, b, c;

    printf("Digite a quantidade de conjunto de notas: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        printf("Digite tres notas: ");
        scanf("%f %f %f", &a, &b, &c);
        printf("Media: %.1f\n", a * 0.2 + b * 0.3 + c * 0.5);
    }

    return 0;
}

