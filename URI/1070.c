/*Leia um valor inteiro X.
Em seguida apresente os 6 valores ímpares consecutivos a partir de X, um valor por linha, inclusive o X ser for o caso..*/
#include <stdio.h>
int main()
{
    int i,num;

    scanf ("%d",&num);
    i = 1;

    while (i <= 6 ){
        if (num % 2 == 0){
        num = num + 1;}

        if (num % 2 == 1){
        printf("%d\n",num);
        num = num+2;}
         i++;

    }
 return 0;
}

