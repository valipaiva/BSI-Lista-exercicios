
#include<stdio.h>
int main()
{
    double salario,reajuste;

    scanf ("%lf",&salario);

    if (salario <= 400.00){
        reajuste = (salario*15)/100;
        printf("Novo salario: %.2lf\n",salario+reajuste);
        printf("Reajuste ganho: %.2lf\n",reajuste);
        printf("Em percentual: 15%%\n");
    }
        else if (salario >=400.01 && salario <=800.00){
                reajuste = (salario*12)/100;
                printf("Novo salario: %.2lf\n",salario+reajuste);
                printf("Reajuste ganho: %.2lf\n",reajuste);
                printf("Em percentual: 12%%\n");
        }
              else if (salario >= 800.01 && salario <= 1200){
                reajuste = (salario*10)/100;
                printf("Novo salario: %.2lf\n",salario+reajuste);
                printf("Reajuste ganho: %.2lf\n",reajuste);
                printf("Em percentual: 10%%\n");
              }
                    else if (salario >= 1200.01 && salario <= 2000){
                        reajuste = (salario*7)/100;
                        printf("Novo salario: %.2lf\n",salario+reajuste);
                        printf("Reajuste ganho: %.2lf\n",reajuste);
                        printf("Em percentual: 7%%\n");
                    }
                        else if (salario > 2000){
                                reajuste = (salario*4)/100;
                                printf("Novo salario: %.2lf\n",salario+reajuste);
                                printf("Reajuste ganho: %.2lf\n",reajuste);
                                printf("Em percentual: 4%%\n");
                    }

    return 0;
}
