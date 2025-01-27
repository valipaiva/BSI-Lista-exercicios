/*Leia 4 valores inteiros a, b, c e d. A seguir, se b for maior do que c e se d for maior do que a, e a soma de c
com d for maior que a soma de a e b e se c e d, ambos, forem positivos e se a variavel a for par escrever a mensagem
"Valores aceitos", sen˜ao escrever "Valores nao aceitos"*/
#include<stdio.h>
int main()
{
    int a,b,c,d,soma1,soma2;

    printf("Digite 4 valores inteiros: ",a,b,c,d);
    scanf("%d%d%d%d",&a,&b,&c,&d);

    soma1= c + d;
    soma2= a + b;

    if (b > c && d > a && soma1>soma2 && c > 0 && d > 0 && a%2 == 0){
        printf("Valores aceitos");
    }
    else
        printf("Valores nao aceitos");

    return 0;
}
