/*Leia 3 valores de ponto flutuante e efetue o c�lculo das ra�zes da equa��o de Bhaskara.
Se n�o for poss�vel calcular as ra�zes, mostre a mensagem correspondente �Impossivel calcular�,
caso haja uma divis�o por 0 ou raiz de numero negativo.*/
#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,raiz1,raiz2,delta;

    printf ("Digite 3 valores: ");
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
