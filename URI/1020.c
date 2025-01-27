/*Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica,
e informe-o expresso no formato horas:minutos:segundos.*/

#include<stdio.h>
int main()
{
    int n,ano,mes,dia;

    scanf("%d",&n);

    ano = n/365;
    mes = (n - (ano*365))/30;
    dia = (n - (ano*365) - (mes*30));



    printf("%d ano %d mes %d dia",ano,mes,dia);


    return 0;
}
