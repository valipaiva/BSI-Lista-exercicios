//Leia 2 valores inteiros x e y (suponha que x>y). A seguir, calcule e mostre quantos numeros impares existem entre eles.

#include<stdio.h>
int main()
{
    int x,y,i,cont=0;

    printf("Digite o maior valor: ");
    scanf("%d",&x);
    printf("Digite o menor valor: ");
    scanf("%d",&y);

    for (i=y+1;i<x;i++)
    {
        if (i%2==1)
        cont=cont+1;
    }
     printf("A quantidade de numeros impares eh: %d\n",cont);

 return 0;
}

