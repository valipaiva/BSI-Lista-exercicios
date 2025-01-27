// o erro é de execução porque a conversão de tipos no printf é possivel (ler um char e imprimir como int e vice-versa) mas nao de int para float
#include<stdio.h>
int main(){
    int aux;
    printf("Digite um numero inteiro: ");
    scanf("%d", &aux);
    printf("%f", aux);
    //printf("%d", aux);//correcao: imprimir como inteiro
    return 0;
}
