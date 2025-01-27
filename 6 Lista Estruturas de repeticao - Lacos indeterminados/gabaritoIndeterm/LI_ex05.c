#include <stdio.h>

int main()
{
    int num1, num2,
        aux,
        mmc,
        i;

    // solucao 01
    printf("Digite a e b (sendo a < b): ");
    scanf("%d %d", &num1, &num2);
    for (i = 2; i <= num2; i++) {
        aux = num1 * i;
        if ((aux % num2) == 0) {
            mmc = aux;
            i = num2 + 1;
        }
    }
    printf("MMC de %d e %d eh: %d\n", num1, num2, mmc);


    //solucao 02 - usando o MDC
    // explora que MMC(a,b) × MDC(a,b)=a×b
    int mdc = num1,
        b = num2,
        resto;


    while(b != 0){
        resto = mdc % b;
        mdc = b;
        b = resto;
    }

    mmc = num1 * num2 / mdc;
    printf("MMC de %d e %d eh: %d\n", num1, num2, mmc);

}
