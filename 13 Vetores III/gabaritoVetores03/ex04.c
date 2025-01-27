#include<stdio.h>

#define N 8

void imprimeVetor(int v[], int tam);
void retornaDoisMaiores(int v[], int tam, int *maior1, int *maior2);

int main()
{
    int v[]= {-1, 5, 8, 4, -1, 1, 7, 7};
    int maior1, maior2;

    imprimeVetor(v,N);
    retornaDoisMaiores(v, N, &maior1, &maior2);
    printf("Maior: %d\n", maior1);
    printf("Maior: %d\n", maior2);

    return 0;
}

void imprimeVetor(int v[], int tam)
{
    int i;

    for(i=0; i<tam; i++)
        printf("%d ",v[i]);
    printf("\n");

}

void retornaDoisMaiores(int v[], int tam, int *maior1, int *maior2)
{
    //observe que retornamos os valores por referência!

    int i;

    if(v[0] > v[1]) {
      *maior1 = v[0];
      *maior2 = v[1];
   } else {
      *maior1 = v[1];
      *maior2 = v[0];
   }

    //faça o teste de mesa para entender o que está acontecendo!
   for(i = 2; i < tam; i++) {
      if(*maior1 < v[i]) {
         *maior2 = *maior1;
         *maior1 = v[i];
      } else if(*maior2 < v[i])
         *maior2 =  v[i];
   }
}
