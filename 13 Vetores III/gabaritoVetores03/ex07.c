#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TRUE 1
#define FALSE 0

#define N 10

/* Função auxiliar de busca. */
int presenteEm (int valor, int* v, int n_elementos)
{
    int i;
    for (i = 0; i < n_elementos; i++)
        if (v [i] == valor)
            return (TRUE);

    return (FALSE);
}

/* Coloca em v_out os elementos de v_in, mas sem repetições. */
int removeRepeticoes (int* v_in, int n_elementos, int* v_out)
{
    int i;
    int n_out = 0;

    /* Usamos uma função de busca auxiliar! */
    for (i = 0; i < n_elementos; i++)
        if (!presenteEm (v_in [i], v_out, n_out))
            v_out [n_out++] = v_in [i];

    return (n_out);
}

/* Procura a intersecção de 2 vetores. O resultado é colocado no vetor out.
 * Supomos que out é capaz de armazenar todos os valores. A função retorna
 * o número de elementos inseridos no vetor de saída. */
int interseccaoVetores (int* v1, int n_v1, int* v2, int n_v2, int* out)
{
    int i, j;
    int n_out = 0;

    /* Pega cada elemento em v1 e vê se ele aparece em v2. */
    for (i = 0; i < n_v1; i++)
        for (j = 0; j < n_v2; j++)
            if (v1[i] == v2[j]) /* Aparece em ambos. */
            {
                out [n_out++] = v1 [i];
                break;
            }

    return (n_out);
}
/* Procura o complemento da intersecção de 2 vetores. O resultado é colocado no
 * vetor out. Supomos que out é capaz de armazenar todos os valores. A função
 * retorna o número de elementos inseridos no vetor de saída.
 *
 * Se já pudéssemos usar vetores auxiliares, poderíamos trabalhar direto com
 * as funções de união e intersecção! */

int compInterseccaoVetores (int* v1, int n_v1, int* v2, int n_v2, int* out)
{
    int i, j;
    int n_out = 0;

    /* Pega cada elemento de v1 e verifica se ele não aparece em v2. */
    for (i = 0; i < n_v1; i++)
    {
        int tem_no_outro = FALSE;
        for (j = 0; j < n_v2 && !tem_no_outro; j++)
            if (v1 [i] == v2 [j])
                tem_no_outro = TRUE;

        if (!tem_no_outro)
            out [n_out++] = v1 [i];
    }

    /* Faz o contrário agora, com v2. */
    for (i = 0; i < n_v2; i++)
    {
        int tem_no_outro = FALSE;
        for (j = 0; j < n_v1 && !tem_no_outro; j++)
            if (v2 [i] == v1 [j])
                tem_no_outro = TRUE;

        if (!tem_no_outro)
            out [n_out++] = v2 [i];
    }


    return (n_out);
}

/* Procura a uniao de 2 vetores. O resultado é colocado no vetor out. Assumimos
 * que out é capaz de armazenar todos os valores. A função retorna o número de
 * elementos inseridos no vetor de saída. */
int uniaoVetores (int* v1, int n_v1, int* v2, int n_v2, int* out)
{
    int i, j;
    int n_out = 0;

    /* Começamos com todos os elementos de v1. */
    for (i = 0; i < n_v1; i++)
        out [i] = v1 [i];
    n_out = n_v1;

    /* Pega agora v2 e vê se ele ainda não apareceu no vetor de saída. */
    for (i = 0; i < n_v2; i++)
    {
        int ja_tem = FALSE;
        for (j = 0; j < n_out && !ja_tem; j++)
            if (v2 [i] == out [j])
                ja_tem = TRUE;

        if (!ja_tem)
            out [n_out++] = v2 [i];
    }

    return (n_out);
}

int main ()
{
    int i;
    int v1 [N], v2 [N];

    int n_v1, n_v2;
    int v1_unicos [N], v2_unicos [N];

    /* Não podemos ter mais que N elementos presentes em ambos os vetores. */
    int n_em_ambos;
    int v1_and_v2 [N];

    /* Se todos os elementos forem diferentes, teremos 2N elementos. */
    int n_somente_em_um;
    int v1_xor_v2 [N*2];

    /* Se todos os elementos forem diferentes, teremos 2N elementos. */
    int n_em_qualquer_um;
    int v1_or_v2 [N*2];

    /* Preenche v1 e v2. */
    srand (1);
    printf ("v1:\n");
    for (i = 0; i < N; i++)
    {
        v1 [i] = rand () % (2*N);
        printf ("%d, ", v1[i]);
    }
    printf ("\n");

    printf ("v2:\n");
    for (i = 0; i < N; i++)
    {
        v2 [i] = rand () % (2*N);
        printf ("%d, ", v2[i]);
    }
    printf ("\n");

    /* Remove elementos repetidos. */
    n_v1 = removeRepeticoes (v1, N, v1_unicos);
    n_v2 = removeRepeticoes (v2, N, v2_unicos);

    /* Valores em ambos os vetores. */
    n_em_ambos = interseccaoVetores (v1_unicos, n_v1,
                                     v2_unicos, n_v2, v1_and_v2);
    printf ("Valores que aparecem em ambos os vetores:\n");
    for (i = 0; i < n_em_ambos; i++)
        printf ("%d, ", v1_and_v2 [i]);
    printf ("\n");

    /* Valores em apenas um dos vetores. */
    n_somente_em_um = compInterseccaoVetores (v1_unicos, n_v1,
                                              v2_unicos, n_v2, v1_xor_v2);
    printf ("Valores que aparecem em somente um dos vetores:\n");
    for (i = 0; i < n_somente_em_um; i++)
        printf ("%d, ", v1_xor_v2 [i]);
    printf ("\n");

    /* Todos os valores. */
    n_em_qualquer_um = uniaoVetores (v1_unicos, n_v1,
                                     v2_unicos, n_v2, v1_or_v2);
    printf ("Valores que aparecem em qualquer um dos vetores:\n");
    for (i = 0; i < n_em_qualquer_um; i++)
        printf ("%d, ", v1_or_v2 [i]);
    printf ("\n");

    return (0);
}

/*Solução prof. Bogdan*/
