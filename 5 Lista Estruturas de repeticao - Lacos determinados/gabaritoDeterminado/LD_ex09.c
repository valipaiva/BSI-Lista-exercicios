#include <stdio.h>

int main()
{
    int i, a ,b, n;

    //laco para percorrer todos os numeros de 4 dígitos
    for (i=1000;  i<10000; i++)
    {
        b = i%100; //dois últimos dígitos
        a = i/100; //dois primeiros dígitos
        n = a+b;
        if (n*n == i) //verifica condição do enunciado
            printf("%d\n\n", i); //mostra
    }

    return 0;
}
