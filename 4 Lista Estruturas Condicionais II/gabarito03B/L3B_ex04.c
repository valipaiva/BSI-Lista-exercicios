#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int n1, n2, //numeros aleatorios sorteados
        op, //operacao sorteada (+ - * /)
        resultado, //resultado correto
        resposta; // resposta do usuario
    clock_t tempo; //tempo

    srand(time(NULL)); //semente do rand();
    n1 = rand() % 100 + 1; // gera o primeiro valor no intervalo 1-100
    n2 = rand() % 100 + 1; // gera o segundo valor no intervalo 1-100

    op = rand()%4; // sorteia um valor entre 0-3 para escolher a operacao

    if(op==0){
        printf("Quanto é %d+%d?\n ", n1, n2);
        resultado = n1+n2;
    }
    else if(op==1){
        printf("Quanto é %d-%d?\n ", n1, n2);
        resultado = n1-n2;
    }
    else if(op==2){
        printf("Quanto é %d*%d?\n ", n1, n2);
        resultado = n1*n2;
    }
    else if(op==3){
        printf("Quanto é %d/%d (divisao inteira)?\n ", n1, n2);
        resultado = n1/n2;   //só divisao inteira
    }

    tempo = clock(); //inicio da contagem de tempo2
    printf("Sua resposta: ");
    scanf("%d", &resposta);

    if(resposta==resultado)
        printf("Voce acertou e demorou ");
    else
        printf("Voce errou e demorou ");

    printf("%d segundos!\n", clock() - tempo); //ajuste pode varia dependendo da maquina!Fica como exercício
    //printf("%d segundos!\n", (clock() - tempo) / CLOCKS_PER_SEC); //windows
    /*Clock ticks are units of time of a constant but system-specific length, as those returned by function clock.
      Dividing a count of clock ticks by this expression yields the number of seconds.*/

    return 0;
}


