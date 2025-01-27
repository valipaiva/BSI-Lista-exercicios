#include<stdio.h>
#include<string.h>
#define TAM 50

int substringFinal(char str1[], char str2[]);

int main()
{
    char frase1[TAM] = "melancia",
         frase2[TAM] = "cia";
    int ans;

    /*printf("Digite a frase 1: ");
    fgets(frase1, TAM, stdin);
    frase1[strlen(frase1)-1] ='\0'; //para tirar o \n
    printf("Digite a frase 2: ");
    fgets(frase2, TAM, stdin);
    frase2[strlen(frase2)-1] ='\0'; //para tirar o \n*/

    ans = substringFinal(frase1, frase2);
    if(ans==1)
        printf("%s corresponde aos ultimos caracteres de %s \n", frase2, frase1);
    else
        printf("%s NAO corresponde aos ultimos caracteres de %s \n", frase2, frase1);
    return 0;
}

int substringFinal(char str1[], char str2[]){
    int i,
        idx=strlen(str1)-strlen(str2);


    for(i=0; i<strlen(str2); i++){
        printf("Comparando str1[%d] com str2[%d] \n", idx, i);
        if(str1[idx] != str2[i])
            return 0;
        idx++;
    }

    return 1;

}
