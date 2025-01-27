/*Escreva um programa que declare e preencha com valores aleatorios (variando entre -15 e 5) um vetor v de TAM
elementos (o tamanho do vetor deve ser determinado por uma constante - use a diretiva define). Dado um valor
num, lido do teclado, escrever na tela ACHEI se o valor num existir em v e NAO ACHEI caso contrario. OBS.: assim
que o valor num for encontrado, a busca deve ser interrompida.
*/
#include<stdio.h>
#define TAM 10 //definição de uma constante

int main(){
    //declaração de variáveis
    int v[TAM], i, num,
        ind=0; //variável indicadora!

    //inicialização da semente para a funcao rand
    srand(time(NULL));

    //preenchimento do vetor
    for(i=0; i<TAM; i++)
        v[i] = rand()%21-15; // analise!

    //impressão do vetor
    for(i=0; i<TAM; i++)
        printf("%d \t", v[i]);

    printf("\n\nDigite o valor de num: ");
    scanf("%d", &num);

    for(i=0; i<TAM; i++)
        if(v[i]==num){
            ind=1;
            break; //como achou, pode interromper o laço
        }

    if(ind==1)
        printf("\n\nAchei!");
    else
        printf("\n\nNao achei!");

    return 0;
}
