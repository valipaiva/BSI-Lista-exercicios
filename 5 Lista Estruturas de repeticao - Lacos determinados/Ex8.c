/*A seguinte sequencia de numeros 0 1 1 2 3 5 8 13 21... e conhecida como serie de Fibonacci. Nessa sequencia,
cada numero, depois dos 2 primeiros, e igual a soma dos 2 anteriores. Escreva um algoritmo que leia um inteiro n e
mostre os n primeiros numeros dessa serie*/

#include<stdio.h>

int main()
{
    int n,i,ant1=0,ant2=1,termo;

    scanf("%d",&n);

    printf("%d %d ",ant1,ant2);//imprimir os dois primeiros termos
    for (i=3; i<=n ; i++){ //inicia em 2 pq os dois primeiros ja foram impressos
        termo = ant1 + ant2; // calcula o novo valor

        ant1 = ant2; //atualiza a variavel
        ant2 = termo;
          printf("%d ",termo);
    }

    return 0;
}

