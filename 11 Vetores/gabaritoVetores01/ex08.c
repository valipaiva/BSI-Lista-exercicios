#include<stdio.h>
#define TAM 5 //definição de uma constante

int main(){
    //declaração de variáveis
    int i, qtdeLetras, aux;
    char letras[TAM];

    //preenche o vetor com as letras. Um programa mais cuidadoso evitaria repetição de
    //letras - veja exercício 06 da lista.
    printf("Digite as letras: ");
    for(i=0; i<TAM; i++){
        scanf(" %c", &letras[i]); //observe o detalhe do espaço. Consegue justificar pq é necessário?
    }

    printf("Digite quantas letras terah a mensagem: ");
    scanf("%d", &qtdeLetras);

    for(i=0; i<qtdeLetras; i++){
        do{
            scanf("%d", &aux);
        }while(aux<0 || aux>TAM-1); //testa se está no intervalo válido de acesso ao vetor

        printf("Mensagem: %c \n", letras[aux]);

    }
}
