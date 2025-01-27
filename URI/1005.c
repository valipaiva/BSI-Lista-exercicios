/*Read two floating points' values of double precision A and B, corresponding to two student's grades.
After this, calculate the student's average, considering that grade A has weight 3.5 and B has weight 7.5*/

#include <stdio.h>
int main()
{
    float A,B,media;

    scanf("%f",&A);
    scanf("%f",&B);

    media = ((A*3.5)+(B*7.5))/11;

    printf("MEDIA = %.5f",media);

    return 0;
}
