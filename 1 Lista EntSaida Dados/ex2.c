/*Implemente um programa que leia tres variaveis do teclado, uma de cada tipo visto em sala: int,
 char e float. Ao nal, imprima o conteudo de cada variavel. Lembre-se de usar nomes signi cativos
 e de imprimir mensagens adequadas!*/
#include<stdio.h>

int main ()
{
 int idade;
 float peso;
 char letra;


 printf("Primeira letra do nome: ", letra);
    scanf("%c", &letra);

    printf("Digite idade: ",idade);
    scanf("%d", &idade);

    printf("Digite peso: ",peso);
    scanf("%f", &peso);

    printf("%c %d %.1f",letra,idade,peso);

    return 0;
}
