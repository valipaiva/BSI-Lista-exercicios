/*FLeia 5 valores Inteiros. A seguir mostre quantos valores digitados foram pares,
quantos valores digitados foram ímpares, quantos valores digitados foram positivos e quantos valores digitados foram negativos.*/
#include <stdio.h>
int main()
{
    int i,num,contpar=0,contimp=0,contposi=0,contneg=0;

    for (i=1; i<=5; i++){
        scanf("%d",&num);

        if (num%2 == 0)
            contpar=contpar+1;

             if (num%2 == 1)
                contimp++;

                    if (num >0)
                        contposi++;

                            if (num<0)
                                contneg++;
    }

    printf("%d valor(es) par(es)\n",contpar);
    printf("%d valor(es) impar(es)\n",contimp);
    printf("%d valor(es) positivo(s)\n",contposi);
    printf("%d valor(es) negativo(s)\n",contneg);
 return 0;
}

