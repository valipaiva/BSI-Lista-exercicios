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
    scanf ("%lf %lf %lf",&a,&b,&c);

    delta = sqrt( pow(b,2) - 4 * a *c);

    if (delta <= 0 || a <= 0){

        printf("Valores raizes no Conj dos Complexos! \n");}

        else
        if (delta > 0){
            raiz1 = ((- b + delta)/(2.0 * a));
            raiz2 = ((- b - delta)/(2.0 * a));

            printf ("Raiz 1 : %.2lf\n",raiz1);
            printf ("Raiz 1 : %.2lf",raiz2);}

               return 0;
}
