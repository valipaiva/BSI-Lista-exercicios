/*Segundo especificado na questão, você deve usar ponteiros para percorrer os vetores!! Aqui usamos índices!*/

#define TAM 50

void GetSubString(char dest[], char src[], int begin, int end){
  int i,j;
  j = 0;
  for(i=begin; i<=end; i++){
    dest[j] = src[i];
    j++;
  }
  dest[j] = '\0';
}

int main(){
    char entrada[TAM], saida[TAM];
    int in, fim;

    printf("Digite a entrada: ");
    gets(entrada);
    printf("Indices de entrada e saída: ");
    scanf("%d%d", &in, &fim);

    GetSubString(saida, entrada, in, fim);
    puts(saida);

    return 0;

}
