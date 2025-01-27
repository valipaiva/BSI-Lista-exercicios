#include <stdio.h>
#define PI 3.14159

int main ( )
{
 int r;
 double volume; //com float nao eh possivel armazenar um valor muito grande (como ultimo teste indicado na lista)
 printf ("Entre com o raio da esfera (inteiro): ");
 scanf("%d", &r);
 volume = (4.0 / 3.0) * PI * r * r * r;
 printf("Volume da esfera de raio %d eh igual a: %.3lf", r, volume);
 return 0;
}
