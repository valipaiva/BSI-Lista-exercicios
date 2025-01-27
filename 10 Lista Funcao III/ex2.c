/*Crie uma func˜ao que receba os valores a, b e c passados por valor, e receba tambem dois valores x1 e
x2 passados por referencia. Em seguida, calcule e retorne as duas raızes da equac˜ao do segundo grau nas
variaveis x1 e x2. Prototipo: int calcula raizes(float a, float b, float c, float *x1, float *x2)
*/
#include<stdio.h>
#include<math.h>

int calcula_raizes(float a, float b, float c, float *x1, float *x2);

int main()
{
    float a,b,c,resp,x1,x2;

    printf("Digite valores para a, b e c: ");
    scanf("%f%f%f",&a,&b,&c);

    resp = calcula_raizes(a,b,c,&x1,&x2);
    printf("%d",resp);
    //if (resp == 1)
      //  printf("%d %d",x1,x2);
   // else
     //   printf("Não existe raiz nos reais");
}
int calcula_raizes(float a, float b, float c, float *x1, float *x2)
{
    float delta;

    delta = b*b - (4*a*c);
    printf ("%f\n",delta);

    if (delta > 0){
        *x1= (b + sqrt(delta))/2*a;
        *x2= (b - sqrt(delta))/2*a;
          return 1;}

    else
        return 0;
}
