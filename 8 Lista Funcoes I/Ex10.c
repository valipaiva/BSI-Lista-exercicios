/*Implemente uma func˜ao que retorna o n-esimo termo da sequencia de Fibonacci. Voce deve garantir que o valor n
passado por parametro sera sempre maior que 0 (faca consistencia de dados). O prototipo da func˜ao e:
int fibonacci (int n); 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89*/
//http://www.programasprontos.com/introducao-a-algoritmos/enesimo-termo-da-sequencia-fibonacci-ruby/
#include<stdio.h>

int fibonacci (int x)
{
     if (x == 1)
        return 0;

        else if (x == 2)
            return 1;
         else
        return fibonacci(x-1) + fibonacci(x-2);
}
int main()
{
    int n;

    printf("Digite a posicao: ");
    scanf("%d",&n);

    printf("%d ", fibonacci(n));

    return 0;
}

