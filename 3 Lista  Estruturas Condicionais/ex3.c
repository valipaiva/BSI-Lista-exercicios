/* Leia 2 valores reais (x e y), os quais representam as coordenadas de um ponto em um plano.
A seguir, determine a qual quadrante pertence o ponto. Analise tambem se esta sobre um dos eixos cartesianos ou na origem (x = y = 0).*/
#include<stdio.h>
int main()
{
    float x,y;

    printf("Digite valor para x: ");
    scanf("%f",&x);

    printf("Digite valor para y: ");
    scanf("%f",&y);

    if (x == 0 && y == 0){
        printf("Origem");
    }
    else
    if (x == 0){
        printf("Eixo y");
    }
    else
    if (y == 0){
        printf("Eixo x");
    }
    else
    if (x > 0 && y > 0){
        printf("Q1");
    }
    else
    if (x < 0 && y > 0){
        printf("Q2");
    }
    else
    if (x < 0 && y < 0){
        printf("Q3");
    }
    else
    if (x > 0 && y < 0){
        printf("Q4");
    }
    return 0;
}
