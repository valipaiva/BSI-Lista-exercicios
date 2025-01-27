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

    printf("Digite um limite para o valor aleatório: ");
    scanf("%d", &aux);

    printf("\nPreenchendo o vetor com valores aleatórios entre 1 e %d! \n", aux);
    preencheVetor(vetor, N, aux);

    printf("\nImpressão do vetor na ordem direta e na ordem inversa! \n");
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
Exercício 01
Função que preenche um vetor com valores aleatórios entre 1 e lim
*/
void preencheVetor(int v[], int n, int lim){

    int i;

    for(i=0; i<n; i++)
        v[i] = rand()%lim+1;
}

/*
Exercício 02
Função que imprime na tela o conteúdo de um vetor em ordem direta
*/
void imprimeVetor(int v[], int n){

    int i;

    for(i=0; i<n; i++)
        printf("%d ", v[i]);
    printf("\n");
}

/*
Exercício 02
Função que imprime na tela o conteúdo de um vetor em ordem inversa
*/
void imprimeVetorInverso(int v[], int n){

    int i;

    for(i=n-1; i>=0; i--)
        printf("%d ", v[i]);
    printf("\n");
}

/*
Exercício 03
Função que retorna a média dos elementos pares de um vetor
*/
float mediaPares(int v[], int n){
    int i,
        soma=0, contPar=0; //inicializa variáveis

    for(i=0; i<n; i++){
        if(v[i]%2 == 0){
            soma = soma + v[i];
            contPar++;
        }
    }
    return (float)soma/contPar; // não se esqueça de fazer o casting: int/int!!
}

/*
Exercício 04
Função que retorna a média dos elementos pares de um vetor,
seu maior elemento e seu menor elemento
*/
float mediaParesMaiorMenor(int v[], int n, int *maior, int *menor){
    int i,
        soma=0, contPar=0; //inicializa variáveis

    *maior = v[0]; // é preciso inicializar as variáveis menor e maior!
    *menor = v[0]; // atenção!!

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
    return (float)soma/contPar; // não se esqueça de fazer o casting: int/int!!
}

/*
Exercício 05
Função que ordena os elementos de um vetor
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
Exercício 06
Função que intercala dois vetores

Fica como exercício :-)
*/



