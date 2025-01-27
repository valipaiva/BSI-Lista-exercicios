/* Leia 3 valores, no caso, variáveis A, B e C, que são as três notas de um aluno.
calcule a média do aluno, sabendo que a nota A tem peso 2, a nota B tem peso 3 e a nota C tem peso 5.
Considere que cada nota pode ir de 0 até 10.0, sempre com uma casa decimal*/

#include <stdio.h>
int main()
{
    float A,B,C,media;

    scanf ("%f\n",&A);
    scanf ("%f\n",&B);
    scanf ("%f",&C);

    media = ((A*2+B*3+C*5)/10);

    printf("Media = %.1f",media);

    return 0;
}
