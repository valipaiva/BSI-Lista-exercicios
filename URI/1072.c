/*Leia um valor inteiro N. Este valor será a quantidade de valores inteiros X que serão lidos em seguida.
Mostre quantos destes valores X estão dentro do intervalo [10,20] e quantos estão fora do intervalo, mostrando essas informações.*/
#include <stdio.h>
int main()
{
    int i,num,x,contin=0,contout=0;
    scanf("%d",&num);

    for (i=1; i <= num; i++)
        {scanf ("%d",&x);

        if (x >= 10 && x <= 20)
            contin++;
        else
            contout++;
       }

    printf("%d in\n%d out\n",contin,contout);
    return 0;
}

