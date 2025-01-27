/*Faca uma func˜ao que receba dois numeros inteiros a e b, em seguida, decremente o primeiro e incremente o
segundo. No exercıcio, a e b devem ser passados por referencia. Depois teste, invocando a func˜ao criada.
Prototipo: void questao01(int *a, int *b)
*/
#include <stdio.h>

void questao01(int *a, int *b);

int main()
{
    int num1,num2;

    printf ("Digite valor para A: ");
    scanf ("%d",&num1);

    printf ("Digite valor para B: ");
    scanf ("%d",&num2);

    questao01(&num1,&num2);
    printf("%d %d",num1,num2);
}

void questao01(int *a, int *b)
{

    *a=*a+1;
    *b=*b-1;
}
