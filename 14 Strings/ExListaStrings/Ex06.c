
/*Segundo especificado na quest�o, voc� deve usar ponteiros para percorrer os vetores!! Aqui usamos �ndices!*/
#include<stdio.h>
#include<string.h>

#define TAM 50

void cebolinhaString(char dest[], char src[]){
    int i, k=0;

    /*Nesta implementa��o, optou-se por criar um
    �ndice diferente para armazenamento no vetor
    dest.
    */
    for(i=0; i<strlen(src); i++)
        //testa a ocorr�ncia de rr. Note que essa verifica��o deve estar antes da verifica��o do r sozinho!!
        if(src[i]=='r' & src[i+1]=='r'){ //assumindo que nenhuma frase termina com rr
            dest[k]='l';
            k++;
            /*tamb�m � preciso incrementar o i...
            sen�o, ir� cair no else if abaixo e o
            resultado apresentar� ll*/
            i++;
        }
        else if(src[i]=='r' & src[i+1]!='\0'){
            dest[k]='l';
            k++;
        }
        else{
            dest[k]=src[i];
            k++;
        }

    dest[k]='\0';
}

int main(){
    char str1[TAM], str2[TAM];
    gets(str1);
    cebolinhaString(str2, str1);
    puts(str2);

    return 0;
}

/*
//SOLU��O 02 - prof Bogdan.
#include <string.h>
#include <stdio.h>

// Fun��o auxiliar, diz se um caractere � uma letra.
int ehLetra (char c) {
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

#define OFFSET_R_L ('R' - 'L') // A dist�ncia do R para o L na tabela ASCII.

void cebolinhaString (char* s, char* s_cebolinha)
{
    int i;
    int size = strlen (s); // Assumindo uma string bem formada.
    int pos_cebolinha = 0; // A posi��o do caractere em s_cebolinha.

    for (i = 0; i < size; i++)
    {
        // Verifica se a letra � um R ou r e n�o est� no final da palavra.
        //   Para saber se � o final de uma palavra, checamos se o pr�ximo
        //   caractere � uma letra. � seguro fazer isso porque mesmo no final da
        //   string, existe um '\0'.
        if ((s[i] == 'R' || s[i] == 'r') && ehLetra (s[i+1]))
        {
            // Se a letra anterior era tamb�m um R/r, j� colocamos o L/l na
            //   posi��o anterior!
            if ((i == 0) || (s[i-1] != 'R' && s[i-1] != 'r'))
                s_cebolinha [pos_cebolinha++] = s[i] - OFFSET_R_L;
        }
        else
            s_cebolinha [pos_cebolinha++] = s[i];
    }

    // Finaliza a string.
    s_cebolinha [pos_cebolinha] = 0;
}

#define BUFLEN 2048

int main ()
{
    char s [BUFLEN];
    char cebolinha [BUFLEN];

    fgets (s, BUFLEN, stdin);
    s [strlen (s)-1] = 0; // Remove o '\n'.

    cebolinhaString (s, cebolinha);
    printf ("%s\n", cebolinha);

    return (0);
}
*/

