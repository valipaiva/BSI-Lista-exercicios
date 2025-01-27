/*Escreva um programa que declare e preencha com valores aleatorios (variando entre -15 e 5) um vetor v de TAM
elementos (o tamanho do vetor deve ser determinado por uma constante - use a diretiva define). Dado um valor
num, lido do teclado, escrever na tela ACHEI se o valor num existir em v e NAO ACHEI caso contrario. OBS.: assim
que o valor num for encontrado, a busca deve ser interrompida.
*/
#include<stdio.h>
#define TAM 10 //defini��o de uma constante

int main(){
    //declara��o de vari�veis
    int v[TAM], i, num,
        ind=0; //vari�vel indicadora!

    //inicializa��o da semente para a funcao rand
    srand(time(NULL));

    //preenchimento do vetor
    for(i=0; i<TAM; i++)
        v[i] = rand()%21-15; // analise!

    //impress�o do vetor
    for(i=0; i<TAM; i++)
        printf("%d \t", v[i]);

    printf("\n\nDigite o valor de num: ");
    scanf("%d", &num);

    for(i=0; i<TAM; i++)
        if(v[i]==num){
            ind=1;
            break; //como achou, pode interromper o la�o
        }

    if(ind==1)
        printf("\n\nAchei!");
    else
        printf("\n\nNao achei!");

    return 0;
}
