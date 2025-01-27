/*The formula to calculate the area of a circumference is defined as A = π . R2. Considering to this problem that π = 3.14159*/

#include <stdio.h>

int main ()
{

    double raio,PI=3.14159,area;

    scanf("%lf",&raio);

    area = PI*(raio*raio);

    printf("A=%.4lf\n",area);

    return 0;
}
