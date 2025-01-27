#include <stdio.h>

int main()
{
    float x, y;

    printf("Digite as coordenadas")
    scanf("%f %f", &x, &y);

    if (x < 0){ //quanto x é positivo
        if (y < 0)
            printf("Q3\n");
        else if (y == 0)
            printf("Eixo X\n");
        else
            printf("Q2\n");
    }
    else if (x == 0){ //quando x é zero!
        if (y == 0)
            printf("Origem\n");
        else
            printf("Eixo Y\n");
    }
    else{ //quando x é negativo
        if (y < 0)
            printf("Q4\n");
        else if (y == 0)
            printf("Eixo X\n");
        else
            printf("Q1\n");
    }

    return 0;
}
