/* Leia 6 valores. Em seguida, mostre quantos destes valores digitados foram positivos. Na proxima linha, deve-se
mostrar a media de todos os valores positivos digitados, com um dıgito apos o ponto decimal.*/
#include <stdio.h>

int main()
{
 int i, positivos=0;
 double soma=0,media,num;

    for (i=1; i<=6; i++){
    scanf("%lf", &num);

        if (num > 0){
            positivos++;
            soma= soma + num;
        }
    }

     printf("%d valores positivos\n", positivos);
     printf("Media: %.1f\n", soma/positivos);

 return 0;
}
