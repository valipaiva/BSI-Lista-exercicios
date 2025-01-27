#include <stdio.h>
#include <math.h>

#define DIA_SEG (24*60*60)
#define HORA_SEG (60*60)
#define MIN_SEG 60

int main(void)
{
   int totalSeg,rSeg,dias,horas,mins,segs;
   printf("Digite o total de segundos: ");
   scanf("%d", &totalSeg);
   dias=totalSeg/DIA_SEG;//quantos dias (em segundos) podem ser subtraidos do total de segundos fornecido pelo usuario
   rSeg= totalSeg%DIA_SEG;//quantos segundos restam apos retirar repetidamente os dias
   horas = rSeg/HORA_SEG; //quantos horas (em segundos) podem ser subtraidas do que restou da retirada dos dias
   rSeg = rSeg%HORA_SEG;//quantos segundos restam apos retirar repetidamente as horas
   mins = rSeg/MIN_SEG; //quantos minutos (em segundos) podem ser subtraidos do que restou da retirada das horas
   segs = rSeg%MIN_SEG;//quantos segundos restam apos retirar repetidamente os minutos
   printf("\n%d correspondem a: %d dias, %d horas, %d min, %d seg\n",totalSeg, dias,horas,mins,segs);
   return 0;
}
