#include <stdio.h>

int main(){
    int ano;

    printf("Digite o ano: ");
    scanf("%d", &ano);

    //testa condições e imprime mensagem adequada!
    if ((ano%400 == 0)||(ano%4==0 && ano%100!=0))
          printf("Ano Bissexto\n");
    else
          printf("Ano nao Bissexto\n");

    return 0;
}
