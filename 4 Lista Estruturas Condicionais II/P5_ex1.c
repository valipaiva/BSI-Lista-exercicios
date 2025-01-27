#include<stdio.h>
#include<math.h>

int main()
{
    int num,centena,dezena,unidade,resultado;

    printf("Digite um numero inteiro: ");
    scanf("%d",&num);

    centena = num/100;
    dezena = (num%100)/10;
    unidade = (num%10);

    resultado = (pow(centena,3)+ pow(dezena,3) + pow(unidade,3));

    if (num<100 || num>999){
        printf("Numero invalido, precisa estar no intervalo 100 a 999");}

        else
            if (resultado == num){
            printf("E um numero de Angstron");}

            else
                printf("Nao e um numero de Angstron");

    return 0;
}
