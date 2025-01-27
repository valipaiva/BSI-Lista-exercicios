#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void moverTartaruga( int *ptrTar );
void moverLebre( int *ptrLeb );
void imprimirPosicoesAtuais( int *ptrTar, int *ptrLeb );

int main () {
    int tartaruga = 1 , lebre = 1 , winner,k;
    srand(time(NULL));
    k = rand ()%10 +1; // inicializada a semente do rand()

    while ( lebre <= 70 || tartaruga <=70) {

        moverTartaruga (&tartaruga) ;
        moverLebre (&lebre) ;
        imprimirPosicoesAtuais (&lebre,&tartaruga);
 }
// verifica se alguem alcancou ou passou da posicao 70. Em caso de empate ,assuma que a vencedora eh a tartaruga
    if (tartaruga > lebre)
        printf ( "A TARTARUGA VENCEU!!! EH !!! \ n " ) ;
    else
        printf ( " A LEBRE GANHOU . OH . \ n " ) ;

return 0;
}

void moverTartaruga( int *ptrTar )
{
    int k;
    if (k >= 1 && k <= 5)
        *ptrTar = *ptrTar + 3;

    if (k >= 6 && k <= 7)
        *ptrTar = *ptrTar - 6;

    if (k >= 8 && k <= 10)
        *ptrTar = *ptrTar +1;
}

void moverLebre( int *ptrLeb )
{   int k;

    if (k >= 1 && k <=2)
        *ptrLeb = *ptrLeb;
    if (k <= 3 && k <=4)
        *ptrLeb = *ptrLeb + 9;
    if (k == 5)
        *ptrLeb = *ptrLeb -12;
    if (k <= 6 && k <= 8)
        *ptrLeb = *ptrLeb + 1;
    if (k <= 9 && k <= 10)
        *ptrLeb = *ptrLeb - 2;
}
void imprimirPosicoesAtuais( int *ptrTar, int *ptrLeb )
{   int i;
    for( i = 0; i < 70; i++)
    {
        if(i == *ptrLeb)
            printf("H");

        else if (i == *ptrTar)
            printf("T");

        else
            printf("- ");

    }
    printf("\n");

    if ( *ptrLeb == *ptrTar)
        printf("AII");
}

