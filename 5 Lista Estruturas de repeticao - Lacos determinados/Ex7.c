/*Ler um valor n. Calcular e escrever seu respectivo fatorial. Fatorial de n = n ∗ (n − 1) ∗ (n − 2) ∗ (n − 3) ∗ ... ∗ 1.
Ate qual valor de n seu programa apresenta resultados consistentes?
Ate o numero 20, depois retorna zero*/

#include <stdio.h>
int main()
{
    int num,i,fatorial=1;

    printf("Digite numero inteiro positivo: ");
    scanf("%d", &num);

        for (i = 1; i <= num; i++){
            fatorial = fatorial * i;
            printf("%d\n",fatorial);
        }
return 0;
}
