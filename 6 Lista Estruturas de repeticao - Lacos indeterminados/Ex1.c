/*Escreva um programa que leia numeros digitados pelo usuario ate que este digite um valor negativo. Neste momento,
o algoritmo devera apresentar o maior valor digitado.*/
#include <stdio.h>
int main()
{
    int cont,maior,n,aux;

    printf ("Digite quantidade: ");
    scanf ("%d",&n);
    printf ("Digite valores inteiros positivos: ");
    scanf ("%d",&maior);

    cont=2; // nao entendi pq precisa iniciar em 2

    while (cont <= n){
        printf ("Digite valores inteiros positivos: ");
        scanf("%d",&aux);
            if (aux > maior)
            maior = aux;
        cont++;
    }

    printf ("\nMaior valor: %d",maior);

return 0;
}

