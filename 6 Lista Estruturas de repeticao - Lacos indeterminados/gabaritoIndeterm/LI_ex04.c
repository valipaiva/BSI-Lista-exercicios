#include <stdio.h>

int main()
{
    int chico = 150, //altura em cm
        ze = 110,
        anos=0; //contador

    while(ze < chico){ //laco indeterminado: não sabemos quantas iterações serão necessárias
        ze = ze + 3; //quanto zé cresce em um ano
        chico = chico + 2; //quanto chico cresce em um ano
        anos++; //passou mais um ano com a condição sendo verdadeira
    }

    printf("Quantidade de anos: %d", anos);

    return 0;
}
