#include<stdio.h>
#include<string.h>
#define TAM 50

int main(){
    char texto[TAM], aux[6]= "aeiou";
    int contaVogais[5] = {0}, i, j, cont;
    fgets(texto, TAM, stdin);
    texto[strlen(texto)-1] ='\0';

    //SOLUÇÃO 1 - IMPRIMINDO PARA CADA VOGAL
    printf("\n\nSolução 01\n");
    for(i=0; i<5; i++){
        cont=0;
        for(j=0; j<strlen(texto); j++)
        {
            if(texto[j]==aux[i])
                cont++;
        }
        printf("\n%c ", aux[i]);
        for(j=0; j<cont; j++) //para cada ocorrência daquela vogal, imprime um *
            printf("*");
    }


    //SOLUÇÃO 2 - USANDO UM VETOR DE CONTADORES
    printf("\n\nSolução 02\n");
    for(i=0; i<strlen(texto); i++){
        if(texto[i]=='a')
            contaVogais[0]++; //usando um vetor auxiliar
        else if(texto[i]=='e') //para contar as ocorrências de cada vogal
            contaVogais[1]++;
        else if(texto[i]=='i')
            contaVogais[2]++;
        else if(texto[i]=='o')
            contaVogais[3]++;
        else if(texto[i]=='u')
            contaVogais[4]++;
    }
    for (i=0; i<5; i++){ //para cada vogal
        printf("\n%c ", aux[i]); //aux foi criado apenas para facilitar a impressão da letra antes dos *
        for(j=0; j<contaVogais[i]; j++) //para cada ocorrência daquela vogal, imprime um *
            printf("*");
    }

    return 0;
}
