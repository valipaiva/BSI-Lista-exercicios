#include<stdio.h> //1o errro: faltou #include<stdio.h>

int main(){
    int aux; //2o erro: faltou ; para finalizar a declaracao da variavel aux
    printf("Digite um numero inteiro: "); //3o erro: faltou fechar as aspas na express�o de controle do printf
    scanf("%d", &aux); //4o erro: codigo de formatacao errado (#d) ao ives de %d e 5o erro: variavel aux com letras maisuculas
    printf("%d", aux); //6o erro: s�mbolo de endere�o (&) na fun��o printf
    return 0;//7o erro: faltou ; para finalizar o comando return
}
