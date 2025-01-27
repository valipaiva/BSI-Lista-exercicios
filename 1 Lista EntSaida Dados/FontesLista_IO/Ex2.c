#include<stdio.h>
 int   main(){
    int num;
    char letra;
    float num_pt_flut;

    printf("Entre com uma letra: ");
    scanf("%c", &letra);
    printf("Entre com um numero inteiro: ");
    scanf("%d", &num);
    printf("Entre com um numero de ponto flutuante: ");
    scanf("%f", &num_pt_flut);
    printf("A letra fornecida foi %c, numero inteiro: %d, numero real: %f", letra, num, num_pt_flut);
    return 0;
    }
