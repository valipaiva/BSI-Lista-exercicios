/*Leia 2 valores inteiros (A e B). Ap�s,
o programa deve mostrar uma mensagem "Sao Multiplos" ou "Nao sao Multiplos",
indicando se os valores lidos s�o m�ltiplos entre si.*/
#include<stdio.h>
int main()
{
    int a,b;

    scanf("%d%d",&a,&b);

    if ((a%b) == 0 || (b%a) == 0)
        printf("Sao multiplos");

    else {
        printf("Nao sao multiplos");
    }


    return 0;
}
