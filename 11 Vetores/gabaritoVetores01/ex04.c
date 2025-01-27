#include<stdio.h>
#include<stdlib.h>
#define TAM 6 //defini��o de uma constante

int main(){
    //declara��o de vari�veis
    int v[TAM]={0},//como cada posi��o vai ser um contador, inicializa com zero
          num, i, nroIteracoes;

    //inicializa��o da semente para a funcao rand
    srand(time(NULL));

    printf("Quantos lancamentos do dado? ");
    scanf("%d", &nroIteracoes);

    //"sorteio" do numero e uso de um vetor como
    //apoio para contar as ocorr�ncias de cada face
    for(i=0; i<nroIteracoes; i++){
        num = rand()%6+1;
        v[num-1]++; /*-1 � necess�rio porque o sorteio varia entre 1:6
                    e o �ndice do vetor entre 0:5. Contudo, observe que � equivalente fazer
                    num = rand()%6;
                    v[num]++; */
    }
    //impress�o do vetor
    for(i=0; i<TAM; i++)
        printf("Face %d: %d \n", i+1, v[i]);

    return 0;
}
