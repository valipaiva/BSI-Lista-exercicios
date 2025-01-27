#include<stdio.h>
#include<math.h>

int main()
{
    double a,b,c;

    scanf("%lf%lf%lf",&a,&b,&c);

     if (a >= b+c || b >= c+a || c >= b+a){
        printf("Nao forma triangulo");}

    if ((a*a) == (b*b) +(c*c)){
        printf("Triangulo retangulo\n");}

    if ((a*a) > (b*b) + (c*c)){
        printf("Triangulo obtusangulo\n");}

    if ((a*a) < (b*b) + (c*c)){
        printf("Triangulo acutangulo\n");}

    if (a == b && b == c && a == c){
        printf("Triangulo equilatero\n");}

    if (a == b || b == c || c == a){
        printf("Triangulo isoceles\n");}


    return 0;
}
