#include<stdio.h>
#define TAM 5 //defini��o de uma constante

int main(){
    //declara��o de vari�veis
    int i, qtdeLetras, aux;
    char letras[TAM];

    //preenche o vetor com as letras. Um programa mais cuidadoso evitaria repeti��o de
    //letras - veja exerc�cio 06 da lista.
    printf("Digite as letras: ");
    for(i=0; i<TAM; i++){
        scanf(" %c", &letras[i]); //observe o detalhe do espa�o. Consegue justificar pq � necess�rio?
    }

    printf("Digite quantas letras terah a mensagem: ");
    scanf("%d", &qtdeLetras);

    for(i=0; i<qtdeLetras; i++){
        do{
            scanf("%d", &aux);
        }while(aux<0 || aux>TAM-1); //testa se est� no intervalo v�lido de acesso ao vetor

        printf("Mensagem: %c \n", letras[aux]);

    }
}
