/*Leia um valor inteiro, que � o tempo de dura��o em segundos de um determinado evento em uma f�brica,
e informe-o expresso no formato horas:minutos:segundos.*/

#include<stdio.h>
int main()
{
    int n,hora,minuto,segundo,segundo_final;

    scanf("%d",&n);

    hora = n/3600;
    minuto = (n - (3600*hora))/60;
    segundo = (n - (3600*hora) - (minuto*60));


    printf("%d:%d:%d",hora,minuto,segundo);


    return 0;
}
