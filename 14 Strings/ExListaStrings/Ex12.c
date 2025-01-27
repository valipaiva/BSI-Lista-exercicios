#include<stdio.h>
#include<string.h>
#define TAM 50

int main()
{
    char frase[TAM], aux[TAM];
    int i, k, ehPalindromo = 1; //variavel indicadora

    printf("Digite a frase: ");
    fgets(frase, TAM, stdin);
    frase[strlen(frase)-1] ='\0';


    k=0;
    for(i=0; i<strlen(frase); i++)
        if(frase[i]!=' '){
            aux[k] = frase[i]; //copia em aux o conteúdo
            k++;                   //de frase sem os espaços
        }
    aux[k] = '\0'; //não podemos esquecer o finalizador de strings

    for(i=0; i<strlen(aux)/2; i++){
        //printf("(%d - %d) Comparando %c com %c \n", i, strlen(aux)-i-1, aux[i], aux[strlen(aux)-i-1]);
        if(aux[i] != aux[strlen(aux)-i-1]){ //compara
            ehPalindromo = 0;//atualiza indicadora
            break; //sai do laço, pois já sabemos que não é palíndromo
        }
    }

    if(ehPalindromo==1) //note que ==1 não é necessário
        printf("Eh palindromo");
    else
        printf("Nao eh palindromo");

    return 0;
}
