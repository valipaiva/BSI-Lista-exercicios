/*Calculo de raizes de uma eq de segundo grau*/
#include<stdio.h>
#include<math.h>
int main ()
{
 float a,b,c,r1,r2, delta;

    printf("Por favor forneca os coeficientes da eq de 2grau: \n");
    scanf("%f%f%f",&a,&b,&c);

    delta = pow(b,2)-4*a*c;

    if (delta<0){
        printf("Delta negativo, valor das raizes fora do conj Reias\n");
    }
    else {

        r1=((-b)+sqrt(delta))/(2*a);
        r2=((-b)-sqrt(delta))/(2*a);

        printf ("r1=%.1f e o r2=%.1f\n",r1,r2);
    }

    return 0;
}

