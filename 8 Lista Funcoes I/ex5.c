/*Escreva uma func˜ao que recebe dois inteiros n1 e n2 por parametro e retorna o maior de dois numeros. Desafio: na
func˜ao principal, determine o maior de tres numeros usando apenas duas chamadas a func˜ao definida.
int retornaMaior(int n1, int n2)*/

#include <stdio.h>
//funcao para retornar maior
int retornaMaior (int n1, int n2)
{
     if (n1 < n2)
        return n2;
    else if (n1 > n2)
       return n1;
    else
      return (0);
}

int main()
{
    int num1,num2;

    printf("Digite dois numeros para verificar o maior: ");
    scanf("%d %d",&num1,&num2);

    printf("%d eh o maior!",retornaMaior(num1,num2));

return 0;
}





