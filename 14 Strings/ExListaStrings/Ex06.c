
/*Segundo especificado na questão, você deve usar ponteiros para percorrer os vetores!! Aqui usamos índices!*/
#include<stdio.h>
#include<string.h>

#define TAM 50

void cebolinhaString(char dest[], char src[]){
    int i, k=0;

    /*Nesta implementação, optou-se por criar um
    índice diferente para armazenamento no vetor
    dest.
    */
    for(i=0; i<strlen(src); i++)
        //testa a ocorrência de rr. Note que essa verificação deve estar antes da verificação do r sozinho!!
        if(src[i]=='r' & src[i+1]=='r'){ //assumindo que nenhuma frase termina com rr
            dest[k]='l';
            k++;
            /*também é preciso incrementar o i...
            senão, irá cair no else if abaixo e o
            resultado apresentará ll*/
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
//SOLUÇÃO 02 - prof Bogdan.
#include <string.h>
#include <stdio.h>

// Função auxiliar, diz se um caractere é uma letra.
int ehLetra (char c) {
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

#define OFFSET_R_L ('R' - 'L') // A distância do R para o L na tabela ASCII.

void cebolinhaString (char* s, char* s_cebolinha)
{
    int i;
    int size = strlen (s); // Assumindo uma string bem formada.
    int pos_cebolinha = 0; // A posição do caractere em s_cebolinha.

    for (i = 0; i < size; i++)
    {
        // Verifica se a letra é um R ou r e não está no final da palavra.
        //   Para saber se é o final de uma palavra, checamos se o próximo
        //   caractere é uma letra. É seguro fazer isso porque mesmo no final da
        //   string, existe um '\0'.
        if ((s[i] == 'R' || s[i] == 'r') && ehLetra (s[i+1]))
        {
            // Se a letra anterior era também um R/r, já colocamos o L/l na
            //   posição anterior!
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

