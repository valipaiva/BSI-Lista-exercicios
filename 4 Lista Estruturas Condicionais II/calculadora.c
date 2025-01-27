/*Faça um programa em linguagem C que leia dois valores A e B,
calcule e imprima o resultado da operação escolhida pelo usuário
conforme a tabela a seguir :
‘s’ some os valores de A e B
‘b’ subtraia os valores de A e B
‘m’ multiplique os valores de A e B
‘d’ divida os valores de A e B
‘q’ calcule o quociente da divisão de A por B
‘r’ calcule o resto da divisão de A por B
‘e’calcule o resultado de A elevado a B
‘z’ calcule o resultado de raiz Aésima de B, ou seja, B elevado a (1/A)
O programa deve imprimir na tela o MENU acima informando ao usuário quais as opções disponíveis*/
#include<stdio.h>
#include<math.h>

int main()
{
    double val1,val2,resultado;
    char calc;

    printf("Menu de operacoes:\ns - some os valores de A e B\n");
    printf("b - subtraia os valores de A e B\n");
    printf("m - multiplique os valores de A e B\n");
    printf("d - divida os valores de A e B\n");
    printf("q - calcule o quociente da divisão de A por B\n");
    printf("r - calcule o resto da divisão de A por B\n");
    printf("e - calcule o resultado de A elevado a B\n");
    printf("z - calcule o resultado de raiz Aesima de B, ou seja, B elevado a (1/A)\n");

    printf("\nEntre com a opcao: \n");
    scanf("%c",&calc);

    printf("Entre com valor para A: \n");
    scanf("%lf",&val1);

    printf("Entre com valor para B: \n");
    scanf("%lf",&val2);

           if (calc == 's'){
            resultado= val1+val2;
            printf("%.2lf", resultado);}

        else
        if (calc = 'b'){
            resultado=val1-val2;
            printf("%.2lf",resultado);}

                else
                if (calc == 'm'){
                    resultado=val1*val2;
                    printf("%.2lf",resultado);}

                    else
                    if (calc =='d'){
                        resultado=val1/val2;
                        printf("%.2lf",resultado);}

                        else
                        if (calc =='q'){
                            resultado=val1/val2;
                            printf("%.2lf",resultado);}

                              else
                              if (calc =='r'){
                                 resultado=((int)val1%(int)val2);
                                 printf("%.2f",resultado);}


return 0;
}
