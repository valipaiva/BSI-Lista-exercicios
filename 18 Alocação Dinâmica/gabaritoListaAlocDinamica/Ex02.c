#include<stdio.h>
#include <stdlib.h>
#include<string.h>

#define BUFLEN 1024


char* empacotaString (char* string); //prototipo da funcao empacotaString(...): necessario poque a def esta apos a funcao main(..)
int main()
{

     char buffer [BUFLEN+1],  *bufferEmpacotado;
     printf("Entre com uma string de no maximo 1024 caracteres\n");
     fgets (buffer, BUFLEN, stdin);//se há espaço, inclui \n no final.
     buffer[strlen(buffer)-1]='\0'; //tira o \n do final - experimente roda sem este comando e veja o que acontece...
     bufferEmpacotado = empacotaString(buffer);
     printf("A string original eh %s e a string empacotada eh %s",buffer, bufferEmpacotado);
     return 0;
}




char* empacotaString (char* string)
{
    int i;
    char* string_empacotada;
    int tam_string = strlen (string); /* Assume uma string bem formada. */

    /* Precisa de uma posição extra para o '\0'. */
    string_empacotada = (char*) malloc (sizeof (char) * (tam_string + 1));

    /* Copia a string para o "pacote". */
    for (i = 0; i < tam_string; i++)
        string_empacotada [i] = string [i];
     string_empacotada [tam_string] = '\0';

    return (string_empacotada);
}


/*include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFLEN 1024

char* empacota_str(char* str, char *copia) {

    str [strlen(str)-1]='\0';
    strcpy(copia, str);

    return copia;
}

int main() {

    char str[BUFLEN], *copia;
    int tam, i;

    fgets (str, BUFLEN, stdin);
    tam = strlen(str);
    copia = (char *) malloc(tam*sizeof(char));
    empacota_str(str, copia);

    printf("%d\n", tam);
    printf("%s", copia);

    return 0;
}

*/

