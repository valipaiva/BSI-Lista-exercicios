#include<stdio.h>

int main()
{
    float base, altura;


    printf("Digite a base e a altura do retangulo: ");
    scanf("%f%f", &base, &altura);

    printf("o perimetro do retangulo de base %.2f e altura %.2f eh igual a %.2f ", base, altura, 2*base+2*altura);
    return 0;
}
