#include<stdio.h>
    int main(){
    int n1, n2, aux;
    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &n1);
    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &n2);

    aux=n1%n2;
    printf("o resto da divisao de %d por %d eh %d", n1, n2, aux); //para 2 e 4 a media eh correta (3) para 2 e 3 a media seria 2.5 mas eh trucada para 2
    return 0;
}
