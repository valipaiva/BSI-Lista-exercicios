/*Leia 6 valores. Em seguida, mostre quantos destes valores digitados foram positivos.
Na próxima linha, deve-se mostrar a média de todos os valores positivos digitados, com um dígito após o ponto decimal*/
#include <stdio.h>
int main()
{
 int i, cont=0;
 double soma=0,num;

    for (i=1; i<=6; i++){
    scanf("%lf", &num);

        if (num > 0){
            cont++; //contagem da quantidade de numeros positivos
            soma= soma + num; // soma dos numeros positivos
        }
    }

     printf("%d valores positivos\n", cont);
     printf("%.1f\n", soma/cont); //calcula a media

 return 0;
}

