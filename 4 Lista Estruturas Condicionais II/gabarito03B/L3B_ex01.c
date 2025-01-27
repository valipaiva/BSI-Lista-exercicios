#include <stdio.h>
int main()
{
    int n, copia, ultimoDigito, result = 0;

    printf("Digite um inteiro com tres digitos: ");
    scanf("%d", &n);

    copia = n; // armazena copia, pois vai precisar novamente do valor copia

    while (copia != 0)
    {
        ultimoDigito = copia%10; //ultimoDigito
        result = result + ultimoDigito*ultimoDigito*ultimoDigito; // armazena a soma acumulada em result
        copia /= 10; // "tira" o ultimo digito, atualizando o valor de copia
    }

    if(result == n)
        printf("%d eh um numero de Armstrong.",n);
    else
        printf("%d nao eh um numero de Armstrong.",n);

    return 0;
}
