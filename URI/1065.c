//Faça um programa que leia 5 valores inteiros. Conte quantos destes valores digitados são pares e mostre esta informação.
#include <stdio.h>
int main()
{
    int i,num,cont=0;

    cont=0;
    for (i=1; i<=5; i++){
        scanf("%d",&num);
        if (num%2 == 0)
            cont=cont+1;
    }

    printf("%d valores pares",cont);

 return 0;
}

