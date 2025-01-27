#include <stdio.h>

int main(){
    float nota1, nota2, nota3, //variaveis para armazenar as três notas
          media; //variavel para armazenar a media

    printf("Digite as tres notas: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    //SOLUCAO 01
    //usando apenas ifs
    if (media >= 7)
          printf("Aprovado\n");
    if (media < 4)
          printf("Reprovado\n");
    if (media >= 4 && media < 7)
          printf("Em exame\n");

    //SOLUCAO 02
    /*como apenas uma das condições pode ser verdadeira em uma determinada execução
    do programa, podemos trocar por else if e, assim, diminuir a quantidade de comparações*/
    if (media >= 7)
          printf("Aprovado\n");
    else if (media < 4)
          printf("Reprovado\n");
    else
          printf("Em exame\n");

    return 0;
}
