#include<stdio.h>

int main(){
    char letraMaisc;
    printf("Digite um caractere (de A a Z): ");
    scanf("%c", &letraMaisc);


    printf("%c", letraMaisc+32); //A(65 na tabela ASCII) -> a (97 a tabela ASCII), B (66) -> b (98), ....
    return 0;
}
