#include<stdio.h>

int main()
{
    double salario_mensal,imposto,imposto_final;

    printf("Digite valor do salario mensal: \n");
    scanf("%.2lf",&salario_mensal);

    if (salario_mensal > 3743.19){
    imposto = (salario_mensal - 3743.19)*0.275;
    imposto_final = imposto + (747.59*0.075) + (748.94*0.15) + (747.48*0,225);
       printf("Valor imposto e: %.2lf",imposto_final);}

       else
       if (salario_mensal >= 2995.71 || salario_mensal <=3743.19){
           imposto = (salario_mensal - 2995.70)*0.225;
           imposto_final = imposto + (747.59*0.075) + (748.94*0.15);
           printf("Valor imposto e: %.2lf",imposto_final);}

            else
            if (salario_mensal >= 2246.76 || salario_mensal <=2995.70){
                imposto = (salario_mensal - 2246.75)*0.15;
                imposto_final = imposto + (747.59*0.075);
                printf("Valor imposto e: %.2lf",imposto_final);}

                 else
                    if (salario_mensal >= 1499.16 || salario_mensal <=2246.75){
                    imposto_final= (salario_mensal - 1499.15)*0.075;
                    printf("Valor imposto e: %.2lf",imposto_final);}

                    else
                        if (salario_mensal < 1499.15){
                        printf("Salario isento de imposto!");}

    return 0;
}

