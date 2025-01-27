/*programa para calcular e exibir a soma e media de 5 numeros reais (float) determinados pelo usuario*/
#include<stdio.h>
int main()
{
    float i,n1,n2,n3,n4,n5,soma,media;

    printf("Digite 5 numeros reais: ");
    scanf("%f\n %f\n %f\n %f\n %f",&n1,&n2,&n3,&n4,&n5);

    i=1;
        while (i<=5){
            soma = n1 + n2 + n3 + n4 + n5;
            media =  (n1 + n2 + n3 + n4 + n5)/5;

            i=i+1;
        }
    printf("A soma e: %.2f\n",soma);
    printf("A media e: %.2f",media);

    return 0;
}
