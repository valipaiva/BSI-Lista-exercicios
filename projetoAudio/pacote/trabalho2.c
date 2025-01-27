/*============================================================================*/
/* IF61C - TRABALHO 2                                                         */
/*----------------------------------------------------------------------------*/
/* Autor: Valissa
/*============================================================================*/

#include <stdlib.h>
#include <math.h>

#include "trabalho2.h"


//Atenção: seguir o seguinte modelo para cada função

/** Colocar a descrição de cada função. Essa função calcula
 *   blá blá blá blá blá .....
 *
 * Parâmetros: double* dados: vetor de dados.
 *             ---- fazer o mesmo para todos os parâmetros de entrada!
 *
 * Valor de Retorno: especificar. */

//tipo teste (double* dados, .....)
//{
	//implementação
//}

/** Esta funcao deve modificar o ganho (volume) de um sinal
 *
 * Parâmetros: double* dados: vetor de dados
 *           unsigned long n_amostras: número de amostras no vetor
 *          double ganho: modificador do ganho
 */

void mudaGanho (double* dados, unsigned long n_amostras, double ganho)
{
    int i;
    for (i=0; i < n_amostras; i++)
        dados [i] = ganho * dados [i];
}


/** Esta função adiciona “estalos” periódicos a um sinal
 *
 * Parâmetros: double* dados: vetor de dados.
 *             unsigned long n_amostras: número de amostras no vetor.
 *             unsigned short intervalo: o número de amostras entre dois pontos de ruído é intervalo-1.
 */

 void ruidoPeriodico (double* dados, unsigned long n_amostras, unsigned short intervalo)
 {
    int i;

    for (i=0; i < n_amostras; i+intervalo)
    {
        dados[i] =
    }

 }
