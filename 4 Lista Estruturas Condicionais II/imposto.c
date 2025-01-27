#include<stdio.h>

int main()
{
    double salario,imposto,alic0,alic1,alic2,alic3;
    int mes;

    scanf ("%f %d", &salario,&mes);

    if (mes >= 1 && mes <= 3){
        alic0 = 1499.15;
        alic1 = 2246.75;
        alic2 = 2295.70;
        alic3 = 3743.19;
    }
    else{
        alic0 = 1566.61;
        alic1 = 2347.85;
        alic2 = 3130.51;
        alic3 = 3911.63;
    }

    if (salario < alic0){
        printf("Imposto isento");}

        else if (salario >= alic0 && salario <= alic1){
                imposto = 0.075 * (salario - alic0);
                printf ("Imposto: R$ %.2lf",imposto);
        }
            else if (salario > alic1 && salario <= alic2){
                imposto = 0.075 * (alic1 - alic0) + 0.15 * (salario-alic1);
                printf ("Imposto: R$ %.2lf",imposto);
            }
                else if (salario > alic2 && salario <= alic3){
                    imposto = 0.075 * (alic1 - alic0) + 0.15 * (alic2-alic1) + 0.225 * (salario-alic2);
                    printf ("Imposto: R$ %.2lf",imposto);
                }
                     else if (salario > alic3){
                            imposto = 0.075 * (alic1 - alic0) + 0.15 * (alic2-alic1) + 0.225 * (alic3-alic2) + 0.275*(salario-alic3);
                            printf ("Imposto: R$ %.2lf",imposto);
                     }

    return 0;
}
