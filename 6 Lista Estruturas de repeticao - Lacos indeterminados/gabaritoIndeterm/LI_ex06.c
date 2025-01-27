#include <stdio.h>

int main()
{
    int h; //dados de entrada
    float custo;

    //leitura de h antes do while para testar condicao na entrada
    //alternativa: use do while
    printf("Digite o valor de h: ");
    scanf("%d", &h);

    while(h!=0){
        custo = (h*0.8)/2+10;
        printf("%f \n", custo);
        printf("Digite o valor de h: ");
        scanf("%d", &h); //lembre-se de ler novamente o h.
    }


    return 0;
}
