/*Faca um programa que sorteie um numero aleatorio entre 1 e 500 e ent˜ao peca ao usuario para adivinhar este valor. O
programa devera indicar a cada tentativa do usuario se ela e maior ou menor que o numero magico e contar o numero
de tentativas. Quando o usuario conseguir acertar o numero, o programa devera classificar o usuario como: (a) de 1 a
3 tentativas: \o/; (b) d 4 a 6 tentativas: :-D; (c) de 7 a 10 tentativas: :-) e (d) Mais que 10 tentativas: :-\*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,num,tentativas=1,sorteio;

    printf("Digite um valor entre 1 e 500:\n");
    scanf("%d",&num);

    sorteio = rand() % 500;
    printf("%d\n",sorteio);

    while (num != sorteio){
            if (num > sorteio){
            printf("Numero maior.\n Tente novamente: ");
            scanf("%d",&num);}

            if (num < sorteio){
            printf("Numero menor.\n Tente novamente: ");
            scanf("%d",&num);}
            tentativas++;}

    printf("Numero de tentativas %d",tentativas);

        if (tentativas >=1 || tentativas <= 3){
            printf("(a) de 1 a 3 tentativas: \o/");}

            else
                if (tentativas >= 4 || tentativas <= 6){
                    printf("(b) de 4 a 6 tentativas: :-D");}

                else
                    if (tentativas >= 7 || tentativas <= 10){
                        printf("(c) de 7 a 10 tentativas: :-)");}
        else
            printf("(d) Mais que 10 tentativas: :-\*/");

  return 0;
}


