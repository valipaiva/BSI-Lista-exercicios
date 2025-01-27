#include <stdio.h>

int main()
{
    int n, //dado de entrada
        i=1, //usado para a multiplicacao
        ehTriangular; //indicadora

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    ehTriangular = 0;
    while(i*(i+1)*(i+2) <= n){
        if(i*(i+1)*(i+2) == n)
            ehTriangular = 1;
        i++; //nao se esqueca de incrementar! Comente esta linha e veja o que acontece
    }

    if(ehTriangular==1)
        printf("Eh triangular!! ");
    else
        printf("Nao eh triangular!! ");

    return 0;
}
