/* Precisamos percorrer o vetor original e ir removendo os elementos repetidos.
Um dos problemas � que n�o podemos modificar o conte�do do vetor original. Outro
problema � saber o tamanho do vetor final.

Existem v�rias op��es para resolver estes problemas. Aqui, alocamos um vetor
com o mesmo tamanho do original, e vamos jogando nele os valores encontrados.
Pesquisamos os valores j� inseridos para ver se n�o existem repeti��es. No
final, re-alocamos o vetor, mantendo apenas o n�mero necess�rio de posi��es. N�o
vimos a fun��o realloc em sala - a pr�xima vers�o faz a mesma coisa que esta,
mas sem usar o realloc. */

int removeRepeticoes (int* vetor, int tam_vetor, int** novo_vetor)
{
    int i, j;
    int tam_novo = 0;
    *novo_vetor = (int*) malloc (sizeof (int) * tam_vetor);

    /* Pega cada item do vetor original... */
    for (i = 0; i < tam_vetor; i++)
    {
        int ja_tem = 0; /* Flag que avisa se o vetor novo ja tem o item. */

        /* Verifica se este valor j� foi inserido no vetor. */
        for (j = 0; j < tam_novo && !ja_tem; j++)
            if (vetor [i] == (*novo_vetor) [j])
                ja_tem = 1;

        /* Se n�o achou, insere. */
        if (!ja_tem)
            (*novo_vetor) [tam_novo++] = vetor [i];
    }

    /* Re-aloca. */
    *novo_vetor = (int*) realloc (*novo_vetor, sizeof (int) * tam_novo);

    return (tam_novo);
}

/* Esta vers�o n�o usa o realloc. Ela � um pouco menos eficiente, e usa um vetor
auxiliar dentro da fun��o. */

int removeRepeticoes (int* vetor, int tam_vetor, int** novo_vetor)
{
    int i, j;
    int tam_novo = 0;
    int* vetor_aux;

    vetor_aux = (int*) malloc (sizeof (int) * tam_vetor);

    /* Pega cada item do vetor original... */
    for (i = 0; i < tam_vetor; i++)
    {
        int ja_tem = 0; /* Flag que avisa se o vetor novo ja tem o item. */

        /* Verifica se este valor j� foi inserido no vetor. */
        for (j = 0; j < tam_novo && !ja_tem; j++)
            if (vetor [i] == vetor_aux [j])
                ja_tem = 1;

        /* Se n�o achou, insere. */
        if (!ja_tem)
            vetor_aux [tam_novo++] = vetor [i];
    }

    /* Aloca. */
    *novo_vetor = (int*) malloc (sizeof (int) * tam_novo);

    /* Copia */
    for (i = 0; i < tam_novo; i++)
        (*novo_vetor) [i] = vetor_aux [i];
    free (vetor_aux);

    return (tam_novo);
}

/* Uma observa��o sobre as abordagens acima � que elas funcionam bem apenas
quando o tamanho dos vetores � pequeno em compara��o com a faixa de valores
poss�vel. Se a faixa de valores for menor que o n�mero de itens do vetor (por
exemplo, se forem 1000 itens com valor entre 1 e 100), � mais eficiente alocar
um vetor de flags para dizer quais valores aparecem no vetor original. Depois,
alocamos o novo vetor j� com o tamanho apropriado, e fazemos uma segunda passada
no vetor original, desta vez copiando os valores para o vetor final. */


//Solu��o Bogdan
