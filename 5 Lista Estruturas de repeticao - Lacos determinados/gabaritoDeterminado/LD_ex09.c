#include <stdio.h>

int main()
{
    int i, a ,b, n;

    //laco para percorrer todos os numeros de 4 d�gitos
    for (i=1000;  i<10000; i++)
    {
        b = i%100; //dois �ltimos d�gitos
        a = i/100; //dois primeiros d�gitos
        n = a+b;
        if (n*n == i) //verifica condi��o do enunciado
            printf("%d\n\n", i); //mostra
    }

    return 0;
}
