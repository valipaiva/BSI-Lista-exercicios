#include<stdio.h>
#include<string.h>
#define TAM 50

void criptografa(char frase[], char cripto[]);

int main()
{
    char frase[TAM], cripto[TAM];

    printf("Digite a frase: ");
    fgets(frase, TAM, stdin);
    frase[strlen(frase)-1] ='\0'; //para tirar o \n

    criptografa(frase, cripto);
    puts(cripto);
    return 0;
}

void criptografa(char frase[], char cripto[]){

    int i;

    for(i=0; i<strlen(frase); i++)
        if(frase[i]=='z')
            cripto[i] = 'a';
        else if (frase[i]=='Z')
            cripto[i] = 'A';
        else
            cripto[i] = frase[i] + 1;

    cripto[i]='\0'; // importante! Não se esqueça de finalizar a string!!
}

