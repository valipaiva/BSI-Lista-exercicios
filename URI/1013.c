/*Fa�a um programa que leia tr�s valores e apresente o maior dos tr�s valores lidos seguido da mensagem �eh o maior�*/

#include<stdio.h>
#include<math.h>
int main()
{
    int valA,valB,valC,maiorAB,maior_final;

    scanf("%d%d%d",&valA,&valB,&valC);

    maiorAB = (valA + valB + abs(valA - valB))/2;
    maior_final = (maiorAB + valC + abs(maiorAB - valC))/2;

    printf("%d eh o maior",maior_final);


   return 0;
}
