/*Escreva um programa que leia tr�s valores com ponto flutuante de dupla precis�o: A, B e C. Em seguida, calcule e mostre:
a) a �rea do tri�ngulo ret�ngulo que tem A por base e C por altura.
b) a �rea do c�rculo de raio C. (pi = 3.14159)
c) a �rea do trap�zio que tem A e B por bases e C por altura.
d) a �rea do quadrado que tem lado B.
e) a �rea do ret�ngulo que tem lados A e B.
Entrada =O arquivo de entrada cont�m tr�s valores com um d�gito ap�s o ponto decimal.
Sa�da = O arquivo de sa�da dever� conter 5 linhas de dados. Cada linha corresponde a uma das �reas descritas acima, sempre com mensagem correspondente e um espa�o entre os dois pontos e o valor.
O valor calculado deve ser apresentado com 3 d�gitos ap�s o ponto decimal.*/
#include<stdio.h>
#include<math.h>
int main()
{
    double valA,valB,valC;
    float triangulo,circulo,trapezio,quadrado,retangulo,pi=3.14159;

    scanf("%lf%lf%lf",&valA,&valB,&valC);

    triangulo = (valA * valC)/2;
    circulo = pi * pow(valC,2);
    trapezio = ((valA + valB)* valC)/2;
    quadrado = pow(valB,2);
    retangulo = valA * valB;

    printf("Triangulo: %.3f\n",triangulo);
    printf("Circulo: %.3f\n",circulo);
    printf("Trapezio: %.3f\n",trapezio);
    printf("Quadrado: %.3f\n",quadrado);
    printf("Retangulo: %.3f",retangulo);

    return 0;
}
