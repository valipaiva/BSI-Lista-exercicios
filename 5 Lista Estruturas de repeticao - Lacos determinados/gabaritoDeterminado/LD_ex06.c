#include <stdio.h>

int main () {

    int n, // valor que desejamos testar se � perfeito
        j, // contador que percorre os candidatos a divisor de n
        soma=0; //vari�vel acumuladora

    printf("Digite o valor que deseja testar se eh perfeito: ");
    scanf("%d", &n);

    for(j=1; j<n; j++){  //laco para testar os divisores de n
        if(n%j==0) // se for divisor
            soma+=j; //acumula soma
    }

    if(soma==n) //testa condi��o - veja enunciado
        printf("%d eh perfeito! \n", n);

    return 0;
}

