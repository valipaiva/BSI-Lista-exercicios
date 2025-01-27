/*Um Pet Shop deseja calcular o custo de criac˜ao de porquinhos da India. O custo e encontrado pela formula: Custo =
(H * 0.8)/2 + 10 em que H e o numero de porquinhos da India e Custo e custo em dolar para se criar os porquinhos.
Construir um programa que leia sucessivos valores de H e calcule os respectivos custos. O programa deve parar quando
um valor negativo de H for fornecido*/

#include <stdio.h>
int main()
{
    int cont=1,H;
    double custo;

    printf("Numero de porquinhos da India: ");
    scanf ("%d",&H);

    while (H >= 0){
        custo = ((H*0.8)/2 + 10);
        printf("Custo sera U$$ %.2lf\n",custo);

        printf("\nNumero de porquinhos da India: ");
        scanf ("%d",&H);
        cont++;
    }
    printf("Numero negativo, finaliza!");
return 0;
}

