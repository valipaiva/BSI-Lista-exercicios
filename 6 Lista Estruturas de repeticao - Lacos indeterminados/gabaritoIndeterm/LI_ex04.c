#include <stdio.h>

int main()
{
    int chico = 150, //altura em cm
        ze = 110,
        anos=0; //contador

    while(ze < chico){ //laco indeterminado: n�o sabemos quantas itera��es ser�o necess�rias
        ze = ze + 3; //quanto z� cresce em um ano
        chico = chico + 2; //quanto chico cresce em um ano
        anos++; //passou mais um ano com a condi��o sendo verdadeira
    }

    printf("Quantidade de anos: %d", anos);

    return 0;
}
