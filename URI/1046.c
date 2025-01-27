/*Leia a hora inicial e a hora final de um jogo (apenas a hora, sem os minutos).
A seguir calcule a durac˜ao do jogo, sabendo que o mesmo pode comecar em um dia e terminar em outro,
tendo uma durac˜ao mınima de 1 hora e maxima de 24 horas.
Depois que terminar, altere o programa de forma a considerar tambem os minutos*/
#include<stdio.h>
int main()
{
    int horainicial,horafinal,duracao;

    printf("Digite a hora (sem minutos) inicial: ");
    scanf("%d",&horainicial);

    printf("Digite a hora (sem minutos) final: ");
    scanf("%d",&horafinal);

    duracao = horafinal - horainicial;

    if (horafinal >= 24 && horainicial >= 24){
        printf("Horario invalido");}

        else if (horafinal > horainicial){ //terminou no mesmo dia
            printf("O jogo durou %d hora(s)",duracao);
        }
            else if (horafinal < horainicial){ //terminou no outro dia
                printf("O jogo durou %d hora(s)",(24-horainicial+horafinal));
            }
                    else if (horafinal == horainicial){
                         printf("O jogo durou 24 hora(s)");
                    }
    return 0;
}

