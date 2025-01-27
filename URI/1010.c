/*Neste problema, deve-se ler o código de uma peça 1, o número de peças 1, o valor unitário de cada peça 1,
 o código de uma peça 2, o número de peças 2 e o valor unitário de cada peça 2.
 Após, calcule e mostre o valor a ser pago.

Entrada = O arquivo de entrada contém duas linhas de dados. Em cada linha haverá 3 valores, respectivamente dois inteiros
e um valor com 2 casas decimais.
Saída = A saída deverá ser uma mensagem conforme o exemplo fornecido abaixo,
lembrando de deixar um espaço após os dois pontos e um espaço após o "R$". O valor deverá ser apresentado com 2 casas após o ponto*/
#include<stdio.h>
int main()
{
    int peca1,numero_peca1,peca2,numero_peca2;
    float val_peca1,val_peca2,total1,total2,soma;

    scanf("%d%d%f",&peca1,&numero_peca1,&val_peca1);
    scanf("%d%d%f",&peca2,&numero_peca2,&val_peca2);

    total1 = numero_peca1*val_peca1;
    total2 = numero_peca2*val_peca2;

    soma = total1+total2;

    printf("VALOR A PAGAR: R$ %.2f",soma);

return 0;
}
