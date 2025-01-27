/*Ex parecido com o dos exemplos dos slides
O IMC (Indice de Massa Corporal) e uma medida que foi criada para dar uma indicac˜ao sobre a condic˜ao de peso de
uma populac˜ao. Por sua simplicidade, ele e usado - com crıticas - para avaliar a condic˜ao de indivıduos adultos. A
formula e: IMC = peso / (altura2).
*/

#include<stdio.h>

float calculaIMC (float altura,float peso);
void imprimeIMC (float imc);

int main()
{
    float alt,peso,imc;

    printf("Digite a altura: ");
    scanf("%f",&alt);

    printf("Digite o peso: ");
    scanf("%f",&peso);

    imc = calculaIMC(alt, peso);

    printf("O IMC eh: %.2f", imc);
    printf("%d", imprimeIMC(imc));

return 0;
}

float calculaIMC (float altura,float peso)
{
    return (peso / (altura*altura));
}

void imprimeIMC (float imc)
{
     if (imc < 18.5)
        printf ("Voce esta abaixo do peso.\n");
    else if (imc < 25)
        printf ("Voce esta com o peso normal.\n");
    else if (imc < 30)
        printf ("Voce esta acima do peso.\n");
    else
        printf ("Voce esta obesa (o).\n");
}
