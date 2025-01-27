/* dado um numero de segundos, converta para dias, horas, minutos*/
#include<stdio.h>

int main()
{
    int dia, hora,min,seg,resto_seg;

    printf ("Qual numero em segundos: ");
    scanf("%d", &seg);

    dia = seg/86400;
    resto_seg = seg%86400;

    hora = resto_seg/3600;
    resto_seg = resto_seg%3600;

    min = resto_seg/60;
    resto_seg = resto_seg%60;

    printf ("%d dias, %dhoras, %dminutos e %dsegundos", dia,hora,min,resto_seg);

    return 0;
}
