/*Construa um programa para calcular e exibir a soma e a média de uma série de números inteiros fornecidos pelo
usuário através do teclado. O dado finalizador é o número -1 (ou seja, ao ler -1, o programa deve mostrar o
valor da soma e terminar). */
#include <stdio.h>
int main()
{
    int cont,termos=0,soma=0,num,media;

    for (cont=1; num != -1; cont++){
    scanf("%d", &num);
        if (num > -1){
            termos++;
            soma= soma + num;}
    }

     printf("Soma e: %d \nMedia: %d\n", soma,soma/termos);

 return 0;
}

