#include<stdio.h>
#include<string.h>
#define TAM 50

int main()
{
    char nome[TAM], nomeAbreviado[TAM]="", aux[TAM];
    int i1, i2, tamPalavra;

    printf("Digite um nome: ");
    fgets(nome, TAM, stdin);
    nome[strlen(nome)-1] ='\0'; //para tirar o \n

    i1 = 0;
    i2 = 0;
    while (i2 < strlen(nome))
    {
        //1. posicionar i1 no início da proxima palavra
        while (nome[i1] == ' ')
            i1++;

        //2. posicionar i2 no proximo espaco
        i2 = i1;
        while ((i2 < strlen(nome)) && (nome[i2] != ' '))
            i2++;

        //3. calculo tamanho da palavra
        tamPalavra = i2 - i1;

        //4. se tamPalavra <= 2, imprime a palavra
        if (tamPalavra <= 2)
        {
            strncpy(aux, nome+i1, tamPalavra); //copia em aux a substring correspondente
            aux[tamPalavra]='\0'; //adiciona \0 no final - tente comentar essa linha e veja o que acontece
            printf("%s ", aux);

        }
        else  //imprime a inicial seguida por .
            printf("%c. ", nome[i1]);

        //5. atualizar i1
        i1 = i2;
    }
    return 0;
}


