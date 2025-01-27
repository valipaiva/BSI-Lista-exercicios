#include<stdio.h>
#include<string.h>
#define TAM 50

int main()
{
    char frase1[TAM], frase2[TAM];

    printf("Digite a frase 1: ");
    fgets(frase1, TAM, stdin);
    frase1[strlen(frase1)-1] ='\0'; //para tirar o \n
    printf("Digite a frase 2: ");
    fgets(frase2, TAM, stdin);
    frase2[strlen(frase2)-1] ='\0'; //para tirar o \n

    printf("Fica como exercicio :-)");
    return 0;
}

