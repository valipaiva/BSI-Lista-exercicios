#include <stdio.h>
#include <stdlib.h>

#define N 10

void preencheVetor(int v[], int n, int lim);
void imprimeVetor(int v[], int n);
void imprimeVetorInverso(int v[], int n);
float mediaPares(int v[], int n);
float mediaParesMaiorMenor(int v[], int n, int *maior, int *menor);
void ordenaCrescente(int v[], int n);

int main ()
{
    int vetor[N],
        aux, //maior valor a ser inserido no vetor
        maior, menor; //para armazenar o menor e o maior elemento

    printf("Digite um limite para o valor aleat�rio: ");
    scanf("%d", &aux);

    printf("\nPreenchendo o vetor com valores aleat�rios entre 1 e %d! \n", aux);
    preencheVetor(vetor, N, aux);

    printf("\nImpress�o do vetor na ordem direta e na ordem inversa! \n");
    imprimeVetor(vetor, N);
    imprimeVetorInverso(vetor, N);

    printf("\nMedia dos pares: %.2f. \n", mediaPares(vetor, N));

    mediaParesMaiorMenor(vetor, N, &maior, &menor);
    printf("\nO maior elemento do vetor eh %d e o menor eh %d. \n", maior, menor);

    printf("Vetor ordenado: ");
    ordenaCrescente(vetor, N);
    imprimeVetor(vetor, N);
}

/*
Exerc�cio 01
Fun��o que preenche um vetor com valores aleat�rios entre 1 e lim
*/
void preencheVetor(int v[], int n, int lim){

    int i;

    for(i=0; i<n; i++)
        v[i] = rand()%lim+1;
}

/*
Exerc�cio 02
Fun��o que imprime na tela o conte�do de um vetor em ordem direta
*/
void imprimeVetor(int v[], int n){

    int i;

    for(i=0; i<n; i++)
        printf("%d ", v[i]);
    printf("\n");
}

/*
Exerc�cio 02
Fun��o que imprime na tela o conte�do de um vetor em ordem inversa
*/
void imprimeVetorInverso(int v[], int n){

    int i;

    for(i=n-1; i>=0; i--)
        printf("%d ", v[i]);
    printf("\n");
}

/*
Exerc�cio 03
Fun��o que retorna a m�dia dos elementos pares de um vetor
*/
float mediaPares(int v[], int n){
    int i,
        soma=0, contPar=0; //inicializa vari�veis

    for(i=0; i<n; i++){
        if(v[i]%2 == 0){
            soma = soma + v[i];
            contPar++;
        }
    }
    return (float)soma/contPar; // n�o se esque�a de fazer o casting: int/int!!
}

/*
Exerc�cio 04
Fun��o que retorna a m�dia dos elementos pares de um vetor,
seu maior elemento e seu menor elemento
*/
float mediaParesMaiorMenor(int v[], int n, int *maior, int *menor){
    int i,
        soma=0, contPar=0; //inicializa vari�veis

    *maior = v[0]; // � preciso inicializar as vari�veis menor e maior!
    *menor = v[0]; // aten��o!!

    for(i=0; i<n; i++){
        if(v[i]%2 == 0){
            soma = soma + v[i];
            contPar++;
        }

        if(v[i] < *menor)
            *menor = v[i];
        if(v[i] > *maior)
            *maior = v[i];
    }
    return (float)soma/contPar; // n�o se esque�a de fazer o casting: int/int!!
}

/*
Exerc�cio 05
Fun��o que ordena os elementos de um vetor
*/
void ordenaCrescente(int v[], int n){

	int i, j,
        menor,
        aux,
        indMenor;

	for(i=0; i<n; i++){
		menor = v[i];
		indMenor = i;
		for(j=i+1; j<n; j++){ //procura pelo menor e guarda o indice
			if(v[j] < menor){
				menor = v[j];
				indMenor = j;
			}
		}
		aux = v[i]; //troca o menor elemento com aquele do indice i
		v[i] = v[indMenor];
		v[indMenor] = aux;
	}

}
/*
Exerc�cio 06
Fun��o que intercala dois vetores

Fica como exerc�cio :-)
*/



