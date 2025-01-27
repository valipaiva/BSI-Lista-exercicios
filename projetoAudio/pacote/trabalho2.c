/*============================================================================*/
/* IF61C - TRABALHO 2                                                         */
/*----------------------------------------------------------------------------*/
/* Autor: Valissa
/*============================================================================*/

#include <stdlib.h>
#include <math.h>

#include "trabalho2.h"


//Aten��o: seguir o seguinte modelo para cada fun��o

/** Colocar a descri��o de cada fun��o. Essa fun��o calcula
 *   bl� bl� bl� bl� bl� .....
 *
 * Par�metros: double* dados: vetor de dados.
 *             ---- fazer o mesmo para todos os par�metros de entrada!
 *
 * Valor de Retorno: especificar. */

//tipo teste (double* dados, .....)
//{
	//implementa��o
//}

/** Esta funcao deve modificar o ganho (volume) de um sinal
 *
 * Par�metros: double* dados: vetor de dados
 *           unsigned long n_amostras: n�mero de amostras no vetor
 *          double ganho: modificador do ganho
 */

void mudaGanho (double* dados, unsigned long n_amostras, double ganho)
{
    int i;
    for (i=0; i < n_amostras; i++)
        dados [i] = ganho * dados [i];
}


/** Esta fun��o adiciona �estalos� peri�dicos a um sinal
 *
 * Par�metros: double* dados: vetor de dados.
 *             unsigned long n_amostras: n�mero de amostras no vetor.
 *             unsigned short intervalo: o n�mero de amostras entre dois pontos de ru�do � intervalo-1.
 */

 void ruidoPeriodico (double* dados, unsigned long n_amostras, unsigned short intervalo)
 {
    int i;

    for (i=0; i < n_amostras; i+intervalo)
    {
        dados[i] =
    }

 }
