/* Faca um programa que leia um valor inteiro do teclado e o mostre na tela com pelo menos tres dgitos.
 Exemplo:
 valor lido:7- valor exibido: 007
 valor lido:17- valor exibido: 017
 valor lido:1024- valor exibido: 1024
 Dica: a funcao printf possui opcoes de formatacao para esta finalidade!*/
#include <stdio.h>

int main() {
    int valor;

    // Lê um valor inteiro do usuário
    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    printf("Valor exibido: %03d\n", valor);

    return 0;
}

