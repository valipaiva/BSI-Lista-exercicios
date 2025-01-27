/*Leia um valor inteiro n, que representa o n´umero de casos de teste que vem a seguir. Cada caso de teste consiste
de 3 valores reais. Apresente a m´edia ponderada para cada um destes conjuntos de 3 valores, sendo que o primeiro
valor tem peso 2, o segundo valor tem peso 3 e o terceiro valor tem peso 5.*/

#include <stdio.h>

int main()
{
 int n,i;
 double n1,n2,n3,media;

    scanf("%d",&n);

    for (i=0; i<n; i++){
    scanf("%lf", &n1);
    scanf("%lf", &n2);
    scanf("%lf", &n3);

  media = ((n1*2) + (n2*3) + (n3*5))/10;

  printf("%.1f\n", media);
 }

 return 0;
}
