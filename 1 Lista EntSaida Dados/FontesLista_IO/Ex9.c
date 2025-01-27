// o erro é de execução porque a conversão de tipos no printf é possivel (ler um char e imprimeir como int e vice-versa
#include<stdio.h>
int main(){
    int aux;
    printf("Digite um numero inteiro: ");
    scanf("%d", &aux);
    printf("%3d", aux); //preenche com espaços
    printf("%03d", aux); //preenche com zeros
    return 0;
}
