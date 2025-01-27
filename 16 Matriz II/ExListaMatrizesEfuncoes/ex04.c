//solução de https://www.ime.usp.br/~yw/fisica2001/mac115/program_aulas/arrays/latino.c
/*
 * Problema 6.17 do carderno de Exercicios: Quadrado Latino
 *
 * Dizemos que uma matriz Anxn é um quadrado latino de ordem n se em cada linha
 * e em cada coluna aparecem todos os inteiros 1,2,3,...,n (ou seja, cada linha
 * e coluna é permutação dos inteiros 1,2,...,n).
 *
 * (a) Escreva uma função que recebe como parâmetros um inteiro n, um vetor V
 * com n inteiros e verifica se em V ocorrem todos os inteiros de 1 a n.
 *
 * (b) Usando a função acima, verifique se uma dada matriz inteira Anxn é um
 * quadrado latino de ordem n.
 *
 */

#include <stdio.h>

#define NMAX  100
#define TRUE    1
#define FALSE   0

/* *****************************************************
 *  Prototipos das funcoes
 * *****************************************************
 */
void lematriz (int mat[][NMAX], int nlinhas, int ncolunas);
 /* Le uma matriz inteira mat de dimensao nlinhas x ncolunas
  */
void imprimematriz (int mat[][NMAX], int nlinhas, int ncolunas);
 /* Imprime uma matriz mat de dimensao nlinhas x ncolunas
  */
int estala (int v[], int n, int elemento);
 /* Recebe como parametro um vetor v de tamanho n
  * e devolve TRUE (1) se o  parametro elemento pertence ao vetor;
  * caso contrario a funcao devolve FALSE (0).
  */
int elatina (int v[], int n);
 /* Recebe como parametros um vetor v e um inteiro n
  * e devolve TRUE (1) se todos os inteiros entre 1 e n ocorrem nas
  * n primeiras posicoes do vetor v, caso contrario a funcao
  * devolve FALSE (0).
  */

/* ***************************************************** */

int main (){
  int i, j, n, equadlatino, v[NMAX], m[NMAX][NMAX];

  printf ("Entre com a dimensao da matriz: ");
  scanf ("%d", &n);

  lematriz (m,n,n);
  printf("\n\nMatriz lida:\n");
  imprimematriz (m,n,n);

  equadlatino = TRUE; /* a matriz e' um quadrado latino ate' que
                       * se prove o contrario
                       */
  for (i = 0; i < n && equadlatino == TRUE; i++)
    /* verifica se a linha m[i] da matriz e' "latina" */
    equadlatino = elatina(m[i], n);

  for (j = 0; j < n && equadlatino == TRUE; j++) {
    /* verifica se a coluna j da matriz m e' "latina" */
    /* copia coluna j para o vetor auxiliar v */
    for (i = 0; i < n; i++)
      v[i] = m[i][j];

    equadlatino = elatina(v,n);
  }

  if (equadlatino == TRUE)
    printf("\n\nA matriz e' um quadrado latino.\n");
  else
    printf("\n\nA matriz nao e' um quadrado latino.\n");

  return 0;
}

/*
 * Le uma matriz inteira mat de dimensao nlinhas x ncolunas
 */
void lematriz (int mat[][NMAX], int nlinhas, int ncolunas) {
  int i, j;

  for (i = 0; i < nlinhas; i++) {
    /* leitura da i-esima linha */
    printf("Entre com os elementos da linha no. %d\n", i+1);
    for (j = 0; j < ncolunas; j++)
      scanf("%d", &mat[i][j]); /* nao esqueca o '&'! */
  }
}

/*
 * Imprime uma matriz mat de dimensao nlinhas x ncolunas
 */
void imprimematriz (int mat[][NMAX], int nlinhas, int ncolunas) {
  int i, j;

  for (i = 0; i < nlinhas; i++) {
    /* imprime a i-esima linha */
    for (j = 0; j < ncolunas; j++)
      printf("%4d", mat[i][j]);
    /* muda de linha */
    printf("\n");
  }
}

/*
 * Funcao que recebe como parametro um vetor v de tamanho n
 * e devolve TRUE (1) se o o parametro elemento pertence ao vetor;
 * caso contrario a funcao devolve FALSE (0).
 */
int estala (int v[], int n, int elemento) {
  int i;

  for (i = 0; i < n; i++)
    if (v[i] == elemento)
      return TRUE;

  return FALSE;
}

/*
 * Funcao que recebe como parametros um vetor v e um inteiro n
 * e devolve TRUE (1) se todos os inteiros entre 1 e n ocorrem nas
 * n primeiras posicoes do vetor v, caso contrario a funcao
 * devolve FALSE (0).
 */

int elatina (int v[], int n){
  int i;

  for (i = 0; i < n; i++)
    if (estala(v,n,i+1) == FALSE)
      return FALSE;

  return TRUE;
}
