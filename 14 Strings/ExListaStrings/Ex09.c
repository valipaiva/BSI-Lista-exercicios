#include<stdio.h>
#include<string.h>
#define TAM 50

int main()
{
    char frase1[TAM] = "melancia",
         frase2[TAM] = "jabuticaba";

    /*printf("Digite a frase 1: ");
    fgets(frase1, TAM, stdin);
    frase1[strlen(frase1)-1] ='\0'; //para tirar o \n
    printf("Digite a frase 2: ");
    fgets(frase2, TAM, stdin);
    frase2[strlen(frase2)-1] ='\0'; //para tirar o \n*/

    concatenaParcial(frase1, frase2, 4);
    puts(frase1);
    return 0;
}

void concatenaParcial(char str1[], char str2[], int n){
    int i,
        idx=strlen(str1);


    for(i=0; i<n; i++){
        str1[idx] = str2[i];
        idx++;
    }

    str1[idx] = '\0';

}
