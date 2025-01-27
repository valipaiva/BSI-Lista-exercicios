#include<stdio.h>
#define TAM 10

int main ( ) {
    int vet [ ] = {1, 3, 5, 7, 8, 10, 15, 22, 30, 100};
    int chave, i;
    int pos = 0;

    scanf ("%d", &chave );
    for ( i = 0; i < TAM ; i ++){
        if ( vet [i] == chave ) {
        pos = i ;
        break ;
        }
    }
    printf ("posicao indice = vet[%d]\n",pos);
return 0;
}
