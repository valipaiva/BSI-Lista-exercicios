#include <stdio.h>
#define TAM 100

int main(){
    int m[TAM][TAM]; // como n�o sabemos alocar matrizes dinamicamente, temos que criar uma matriz est�tica de tamanho m�ximo
    int n,i,j;

    printf("Digite o valor de n: (maximo 100) ");
    scanf("%d", &n); // fica como exerc�cio fazer a consist�ncia dos dados

    //inicializa matriz em 0
    // a partir daqui, observe que n�o percorremos TAM linhas, mas sim n (que s�o as preechidas)
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            m[i][j] = 0;

    // preenche a primeira coluna com 1
    for(i=0; i<n; i++)
        m[i][0] = 1;

    //calcula as demais posi��es
    for(i=1; i<n; i++){
        for(j=1; j<n; j++){
           m[i][j] = m[i-1][j-1] + m[i-1][j];
        }
    }

    //se for diferente de 0, imprime
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(m[i][j] > 0)
                printf("%3d ", m[i][j]);
        }
        printf("\n");
    }

    return 0;
}

