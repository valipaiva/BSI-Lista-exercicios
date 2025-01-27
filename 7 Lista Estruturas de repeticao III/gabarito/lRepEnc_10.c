#include <stdio.h>

int main()
{
    int num = 0, // valor que sera testado - altera a cada iteração
        ind = 0, // variavel indicadora
        i; // contador do for


    //a solução abaixo não é a mais eficiente possível, pois testa mais valores do que o necessário!
    while(ind == 0){ // laço indeterminado que depende da variavel indicadora

        num++; // atualiza o valor de num

        ind = 1; // inicializa com status 1
        for(i=1; i<=20; i++){
            if(num%i != 0){ // se encontrar algum divisor no intervalo
                ind = 0; // atualiza o status
                break; // sai do for e testa o próximo num
            }
        }
    }

    printf("%d", num);



	return 0;
}
