/*Escreva um programa que leia o número de um funcionário, seu número de horas trabalhadas,
o valor que recebe por hora e calcula o salário desse funcionário.
A seguir, mostre o número e o salário do funcionário, com duas casas decimais.*/
#include<stdio.h>
int main()
{
    int funcionario,horas;
    float valhora,salario;

    printf ("Entre com o numero do funcionario:\n");
    scanf ("%d",&funcionario);
    printf ("Entre com o numero de horas trabalhadas:\n");
    scanf ("%d",&horas);
    printf ("Entre com o valor que recebe por hora:\n");
    scanf ("%f",&valhora);

    salario = horas*valhora;

    printf ("NUMBER = %d\n",funcionario);
    printf ("SALARY = U$%.2f",salario);

    return 0;
}
