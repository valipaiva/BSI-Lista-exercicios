/*Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, p1(x1,y1) e p2(x2,y2)
e calcule a dist�ncia entre eles, mostrando 4 casas decimais ap�s a v�rgula

Entrada = cont�m duas linhas de dados.
A primeira linha cont�m dois valores de ponto flutuante: x1 y1 e a segunda linha cont�m dois valores de ponto flutuante x2 y2.

Sa�da = Calcule e imprima o valor da dist�ncia segundo a f�rmula fornecida, com 4 casas ap�s o ponto decimal.*/
#include<stdio.h>
#include<math.h>
int main()
{
    double x1,y1,x2,y2,distancia;

    scanf ("%lf %lf\n",&x1,&y1);
    scanf ("%lf %lf",&x2,&y2);

    distancia = sqrt((pow(x2-x1,2) + pow(y2-y1,2)));

    printf("%.4lf", distancia);
    return 0;
}
