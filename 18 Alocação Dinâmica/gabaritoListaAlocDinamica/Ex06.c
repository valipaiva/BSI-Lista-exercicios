Um código que pode ser usado para forçar o vazamento de memória:

int main ()
{
    char* lixo;

    while (1)
    {
        lixo = (char*) malloc (1024);
        printf ("%d", lixo [0]);
    }

    return (0);
}

O que ele faz é ir consumindo mais e mais memória. Se o programa rodar por um longo tempo, o computador começa a usar a memória virtual – em disco, em vez da RAM – e começa a ficar lento. No limite, ele pode parecer “travar”.
//Solução Bogdan
