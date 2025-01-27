#include<stdio.h>

int main()
{

float alcool,gasolina,litroA,litroG,Ra,Rg;

printf("Preco por litro do alcool: \n");
scanf("%f",&alcool);

printf("Preco por litro da gasolina: \n");
scanf("%f",&gasolina);

printf("Rendimento do carro utilizando alcool: \n");
scanf("%f",litroA);

printf("Rendimento do carro utilizando gasolina: \n");
scanf("%f",&litroG);

Ra = alcool/litroA;
Rg = gasolina/litroG;

if(Ra<Rg){
    printf("Alcool");
}
else
    printf("Gasolina");

    return 0;
    }


