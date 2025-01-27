#include<stdio.h>
#include<string.h>
#define TAM 140

int main(){
    char str[TAM];

    printf("Digite uma palavra: ");
    fgets(str, TAM, stdin);
    str[strlen(str)-1] ='\0';

    puts(str);
    converteMaiusculas(str);
    puts(str);

    return 0;
}

void converteMaiusculas(char str[]){
    int i;

    for(i=0; i<strlen(str); i++)
        str[i] = str[i] + 32;
}
