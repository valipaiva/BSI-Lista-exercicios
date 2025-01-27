/*programa que imprima na tela os numeros impares entre 2 e 20*/

#include<stdio.h>
int main()
{
int i;

  for (i=2;i<20;i++){
       if (i%2!=0)
        printf("%d\n",i);
    }

    return 0;
}
