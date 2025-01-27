#include <stdio.h>

int main()
{
    int bin,i,cont,aux=0;
    char msg,cod;
    int r=0;//i, cont=0,aux=0; separar para a funcoo mensagemCod
    int binario=0;//i,cont=0,aux; //separa para funcao codMensagem
    char texto;


    printf("Para codificar uma mensagem [1] Para descodificar codigo digite [2]:\n");
    scanf("%d",&cod);

    if (cod == 1) // codificar msg
    {
        printf("\nMensagem para enviar:\n");
        scanf(" %c",&msg);

        aux = msg;

        while (aux != 46)
        {    cont=0;
            for (i=7; i>=0; i--)
            {
                r =  (1 & (aux >> i)); //considera o binario
                cont = cont+r;
            }
        //printf("%d\n",cont); //validar se o cont estava rodando ok
            if (cont % 2 != 0)
                aux = aux + 128;

                printf("%d ",aux);
                scanf (" %c",&aux);
        }
        printf("46");
    }


    if (cod == 2)
    {
        printf("\nMensagem codificada:\n");
        scanf("%d",&aux);

             while (aux != 46)
            {   cont=0;
                for (i=7; i>=0; i--)
                {
                    binario = (1 & (aux >> i));
                    cont = cont+binario;
                }

                if (cont % 2 == 1) // se a soma binario for impar
                    printf("*");

                else if (cont % 2 == 0 && aux > 122)
                {
                    aux = aux - 128;
                    printf("%c",aux);
                }

                    else
                        printf("%c",aux);

            scanf ("%d",&aux);
            }
            printf(".");
       //printf("%d\n",cont); //validar se o cont estava rodando ok
    }
return 0;
}
