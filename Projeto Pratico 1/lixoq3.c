#include <stdio.h>

//ler a mensagem e imprimir os códigos
main()
{
    int r=0,i,cont=0,aux=0;
    char msg;

    printf("Mensagem para enviar:\n");
    scanf("%c",&msg);

    aux = msg;

    while (aux != '.')
    {   cont=0;
        for (i=7; i>=0; i--)
        {
           r = (1 & (aux >> i));
          cont = cont+r;
        }

        if (cont % 2 != 0)
            aux = aux + 128;

        printf("%d ",aux);
        scanf ("%c",&aux);
    }
       //printf("%d\n",cont); validar se o cont estava rodando ok
}

