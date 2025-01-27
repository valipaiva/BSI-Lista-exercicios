#include<stdio.h>
#include<string.h>
#define TAM 50

int main(){
    char frase[TAM];

    printf("Digite uma frase (FIM para parar): ");
    fgets(frase, TAM, stdin);
    frase[strlen(frase)-1] ='\0';

    //vamos usar a funcao strcmp (veja nos slides mais detalhes - ela retorna 0 quando as strings sao iguais)
    while(strcmp(frase, "FIM")!=0) //note que, se o usuario digitar com letras minusculas, nao vai parar!!!
    {
        printf("%s tem tamanho %d\n", frase, strlen(frase));
        printf("Digite uma frase (FIM para parar): ");
        gets(frase);
    }

    return 0;
}
