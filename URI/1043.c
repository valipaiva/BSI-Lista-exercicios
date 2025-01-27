/* Leia 3 valores reais (A, B e C) e verifique se eles formam ou n�o um tri�ngulo.
Em caso positivo, calcule o per�metro do tri�ngulo e apresente a mensagem:
Perimetro = XX.X

Em caso negativo, calcule a �rea do trap�zio que tem A e B como base e C como altura, mostrando a mensagem
Area = XX.X.*/
#include<stdio.h>
int main()
{
    double a,b,c,peri,area;

    scanf("%lf%lf%lf",&a,&b,&c);

    if ((a+b)>c && (a+c)>b && (b+c)>a){
        peri = a+b+c;
        printf("Perimetro: %.1lf",peri);
    }
    else {
        area = ((a+b)*c)/2;
        printf("Area: %.1lf",area);
    }


    return 0;
}
