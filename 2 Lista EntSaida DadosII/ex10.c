/* ) Leia 3 valores que correspondem as 3 notas de um aluno. Calcule a media do aluno,
a primeira nota tem peso 2, a segunda nota tem peso 3 e a terceira nota tem peso 5.
Imprima a media com 1 dıgito apos o ponto decimal*/

#include <stdio.h>
int main()
{
    float nota1,nota2,nota3,media;

    scanf ("%f\n",&nota1);
    scanf ("%f\n",&nota2);
    scanf ("%f",&nota3);

    media =((nota1*2+nota2*3+nota3*5)/10);
    printf ("A media e: %.1f",media);

    return 0;
}

