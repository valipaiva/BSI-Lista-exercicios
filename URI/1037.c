/*Você deve fazer um programa que leia um valor qualquer e apresente uma mensagem dizendo em qual dos seguintes intervalos
([0,25], (25,50], (50,75], (75,100]) este valor se encontra.
Obviamente se o valor não estiver em nenhum destes intervalos, deverá ser impressa a mensagem “Fora de intervalo”.

O símbolo ( representa "maior que". Por exemplo:
[0,25]  indica valores entre 0 e 25.0000, inclusive eles.
(25,50] indica valores maiores que 25 Ex: 25.00001 até o valor 50.0000000*/
#include<stdio.h>
#include<math.h>
int main()
{
    double num;

    printf ("Digite um valor: ");
    scanf ("%lf",&num);

    if (num >= 0 && num <= 25.00){
        printf("Intervalo (0,25]\n");}

        else
        if (num > 25.00 && num <= 50.00){
            printf("Intervalo (25,50]\n");}

            else
            if (num > 50.00 && num <= 75.00){
                printf("Intervalo (50,75]\n");}

                     else
                     if (num > 75.00 && num <= 100.00){
                        printf("Intervalo (75,100]\n");}

        else
            printf("Fora do intervalo");

               return 0;
}
