#include <stdio.h>

int main()
{
    int valor1, valor2, valor3;

    //leitura dos valores
    printf("Digite tr�s n�meros inteiros: ");
    scanf("%d %d %d", &valor1, &valor2, &valor3);

    //a solucao assume que os tres valores s�o distintos!!

    //se o valor 1 for o menor,
    if (valor1<valor2 && valor1<valor3){
        //verifica quem � o menor dos que restaram e imprime
        if (valor2<valor3)
            printf("%d %d %d", valor1, valor2, valor3);
        else
            printf("%d %d %d", valor1, valor3, valor2);
    }
    //se a primeira condi��o foi falsa, testa se valor 2 � o menor
    else if (valor2<valor1 && valor2<valor3){
        //verifica quem � o menor dos que restaram e imprime
        if (valor1<valor3)
            printf("%d %d %d", valor2, valor1, valor3);
        else
            printf("%d %d %d", valor2, valor3, valor1);
    }
    else{ //neste caso, s� sobrou a possibilidade de valor 3 ser o menor
        if (valor1<valor2)
            printf("%d %d %d", valor3, valor1, valor2);
        else
            printf("%d %d %d", valor3, valor2, valor1);
    }
    return 0;
}
