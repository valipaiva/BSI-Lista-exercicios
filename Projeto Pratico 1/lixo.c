#include <stdio.h>

//separa para função ler códigos e imprime mensagem
main()
{
    int binario=0,i,cont=0,aux;
    char texto;

    printf("Mensagem para enviar:\n");
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

        //else if (cont % 2 == 0) // se a soma binario for par
           // printf("%c",aux);

            else if (cont % 2 == 0 && aux > 122)
            {
                aux = aux - 128;
                printf("%c",aux);
            }

            else
                printf("%c",aux);

            scanf ("%d",&aux);
    }
       //printf("%d\n",cont); //validar se o cont estava rodando ok
}
