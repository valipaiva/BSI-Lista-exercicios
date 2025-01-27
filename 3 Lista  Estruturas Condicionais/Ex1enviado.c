/*Faca um programa que leia tres notas de um aluno e calcule a sua media final.
Ao final, imprimir se o aluno esta aprovado (media maior ou igual a 7), reprovado (media menor que 4) ou em exame*/
#include<stdio.h>
int main ()
{
    float n1,n2,n3,media;

    printf("Digite as 3 notas do aluno\n");
    scanf ("%f%f%f", &n1, &n2, &n3);

    media = (n1+n2+n3)/3;

    if (media >= 7){
        printf("Aluno esta aprovado!");
    }
    else
    if (media < 7 && media >= 4){
        printf("Aluno esta em exame!");
    }
    else
        printf("Reprovado!");

    return 0;
}
