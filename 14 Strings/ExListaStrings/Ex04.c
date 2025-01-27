#include<stdio.h>
#include<string.h>
#define TAM 50

int quantidadeOcorrencias(char frase[], char palavra[]);

int main()
{
    char frase[TAM], palavra[TAM];

    printf("Digite a frase: ");
    fgets(frase, TAM, stdin);
    frase[strlen(frase)-1] ='\0'; //para tirar o \n
    printf("Digite a palavra: ");
    fgets(palavra, TAM, stdin);
    palavra[strlen(palavra)-1] ='\0'; //para tirar o \n

    printf("A quantidade de ocorrencias eh %d", quantidadeOcorrencias(frase, palavra));
    return 0;
}

int quantidadeOcorrencias(char frase[], char palavra[]){
    int tamFrase, tamPalavra, i, j, achou=0, n=0;

    tamFrase = strlen(frase);
    tamPalavra = strlen(palavra);

    for (i = 0; i < tamFrase; i++)
    {
        if (frase[i] == palavra[0])
        {
            achou = 1;
            for (j = 1; j < tamPalavra; j++)
            {
                if (frase[i+j] != palavra[j])
                {
                    achou = 0;
                    break;
                }
            }
            if (achou == 1)
            {
                n = n + 1;
            }
        }
    }
    return n;
}
