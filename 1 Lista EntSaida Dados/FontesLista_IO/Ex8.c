#include<stdio.h>

int main(){
    char aux;
    printf("Digite um caractere: ");
    scanf("%c", &aux);
    printf("%d", aux); //o valor inteiro impresso corresponde ao codigo ASCII do caractere fornecido como entrada
    return 0;
}
