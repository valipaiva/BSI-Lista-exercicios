Um c�digo que pode ser usado para for�ar o vazamento de mem�ria:

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

O que ele faz � ir consumindo mais e mais mem�ria. Se o programa rodar por um longo tempo, o computador come�a a usar a mem�ria virtual � em disco, em vez da RAM � e come�a a ficar lento. No limite, ele pode parecer �travar�.
//Solu��o Bogdan
