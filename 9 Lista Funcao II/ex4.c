/*Construa uma func˜ao que, dados dois inteiros positivos a e b verifica se b corresponde aos ultimos dıgitos de a. A
func˜ao deve retornar 1 se a condic˜ao for satisfeita ou 0, caso contrario. Exemplo
*/
#include<stdio.h>

int ultimoDigito(int a, int b);

int main ()
{
    int numA,numB,aux=0;

    printf("Digite valor para A: ");
    scanf ("%d",&numA);

    printf("Digite valor para B: ");
    scanf ("%d",&numB);

    aux = ultimoDigito(numA,numB);
    printf("%d", aux);
}

int ultimoDigito(int a, int b)
{
        if (a%10 != b%10){
        a = a/10;
        b = b/10;}
        if (a==b)
        return (1);
        else
            return (0);

}

