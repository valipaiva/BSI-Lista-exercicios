/*Faca um programa que calcule o perimetro (2×base + 2×altura) de um retangulo*/

#include<stdio.h>

int main ()
{
    int base,altura,perimetro;

    printf("Digite o valor da base: ");
    scanf ("%d",&base);

    printf("Digite o valor da altura: ");
    scanf ("%d",&altura);

    perimetro = 2*base+2*altura;
    printf("Resultado do perimetro: %d",perimetro);

return 0;
}
