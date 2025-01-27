//Leia um valor inteiro n. Apresente todos os numeros entre 1 e 100 que divididos por n dao resto igual a 2.

#include<stdio.h>
int main()
{
 int aux,n;

 scanf("%d",&n);

    for (aux=1;aux<=100;aux++){
        if (aux%n==2){
            printf("%d\n",aux);
            }
    }
 return 0;
}
