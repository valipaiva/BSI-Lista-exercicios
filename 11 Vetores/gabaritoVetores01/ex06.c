#include<stdio.h>
#include<stdlib.h>
#define TAM 10 //defini��o de uma constante

main(){
    //declara��o de vari�veis
    int k[TAM],v[TAM], i, j, ind, num, contDistintos;

    srand(time(NULL));

    //valor m�ximo a ser inserido no vetor
    printf("Digite o valor m�ximo que deve ser inserido no vetor: ");
    scanf("%d", &num);

    //preenchimento e impress�o do vetor na tela
    for(i=0; i<TAM; i++)
    {
        k[i] = rand()%num+1;
        printf("%d ", k[i]);
    }


    for(i=0; i<TAM; i++) //percorre cada posi��o do vetor
    {
        ind = 0;  // para cada nova posi��o, inicia vari�vel indicadora com FALSO (assume que n�o haver�o repeti��es)
        for(j=i+1; j<TAM; j++) //percorre as pr�ximas posi��es
        {
           if(k[i]==k[j] && k[i]!=-1) //se o elemento na posi��o j for igual ao da posi��o i (e for diferente de -1)
           {
                k[j] = -1; // seta o elemento da posi��o j para -1 (por isso a compara��o com -1 no if)
                ind = 1; // seta indicadora para 1 (VERDADEIRO - houve repeti��o)
           }
        }

        //COMENTE ESSE IF E VEJA O RESULTADO!! O QUE D� ERRADO??
        if(ind==1) // se a indicadora for 1, significa que o elemento da posi��o i estava repetido
            k[i]=-1; //ent�o, � necess�rio setar ele para -1 tamb�m

    }

    //Armazenamento dos valores distintos
    contDistintos = 0; //contador para controlar as inser��es no vetor v
    for(i=0; i<TAM; i++)
    {
        if(k[i]!=-1) // se o elemento de k no �ndice i � diferente de -1, significa que ele n�o est� repetido
        {
            v[contDistintos] = k[i]; //ent�o, insere no vetor v
            contDistintos++;
        }
    }


    if (contDistintos>0) //se contDistintos for maior que 0, existiam valores distintos
    {
        printf("\n\nOs valores distintos sao: ");
        for(i=0; i<contDistintos; i++)
            printf("%d ", v[i]);
    }
    else //caso contr�rio, todos os elementos apareceram repetidos.
        printf("\n\nNao existem valores distintos!!");


}

/*
//OUTRA SOLU��O!!

#include<stdio.h>
#include<stdlib.h>
#define TAM 10 //defini��o de uma constante

main(){
    //declara��o de vari�veis
    int k[TAM],v[TAM],i, j, cont, num, contDistintos;

    srand(time(NULL));

    //valor m�ximo a ser inserido no vetor
    printf("Digite o valor m�ximo que deve ser inserido no vetor: ");
    scanf("%d", &num);

    //preenchimento e impress�o do vetor na tela
    for(i=0; i<TAM; i++)
    {
        k[i] = rand()%num+1;
        printf("%d ", k[i]);
    }


    contDistintos = 0; //contador para controlar as inser��es no vetor v
    for(i=0; i<TAM; i++) //percorre cada posi��o do vetor
    {
        cont = 0;  // para cada nova posi��o, inicia um contador de ocorrencias
        for(j=0; j<TAM; j++) //percorre as pr�ximas posi��es
        {
           if(k[i]==k[j]) //se o elemento na posi��o j for igual ao da posi��o i
           {
                cont++; // incrementa contador
           }
        }
        if(cont==1) // se contador for igual a 1, significa que ele apareceu apenas uma vez!!
        {
            v[contDistintos] = k[i]; //ent�o, insere no vetor v
            contDistintos++;
        }
    }

    if (contDistintos>0) //se contDistintos for maior que 0, existiam valores distintos
    {
        printf("\n\nOs valores distintos sao: ");
        for(i=0; i<contDistintos; i++)
            printf("%d ", v[i]);
    }
    else //caso contr�rio, todos os elementos apareceram repetidos.
        printf("\n\nNao existem valores distintos!!");


}


*/
