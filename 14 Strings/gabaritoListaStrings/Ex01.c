#include<stdio.h>
#include<string.h>
#define TAM 50

int contaConsoantes(char texto[]);

int main(){
    char texto[TAM];
    int cont;

    printf("Digite um texto: ");
    fgets(texto, TAM, stdin);
    texto[strlen(texto)-1] ='\0'; //para tirar o \n

    cont = contaConsoantes(texto);

    printf("O texto %s contem %d consoantes! \n", texto, cont);

    return 0;
}

int contaConsoantes(char texto[]){
    int i, cont=0;

    for(i=0; i<strlen(texto); i++)
    {
        if(texto[i]!='a' && texto[i]!='e' && texto[i]!='i' && texto[i]!='u' && texto[i]!='u')
            cont++;
    }
    return cont;

}
