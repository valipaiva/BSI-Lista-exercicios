/*Escreva um programa que leia três valores com ponto flutuante de dupla precisão: A, B e C. Em seguida, calcule e mostre:
a) a área do triângulo retângulo que tem A por base e C por altura.
b) a área do círculo de raio C. (pi = 3.14159)
c) a área do trapézio que tem A e B por bases e C por altura.
d) a área do quadrado que tem lado B.
e) a área do retângulo que tem lados A e B.
Entrada =O arquivo de entrada contém três valores com um dígito após o ponto decimal.
Saída = O arquivo de saída deverá conter 5 linhas de dados. Cada linha corresponde a uma das áreas descritas acima, sempre com mensagem correspondente e um espaço entre os dois pontos e o valor.
O valor calculado deve ser apresentado com 3 dígitos após o ponto decimal.*/
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
