int main (void) {
    float a, b, c;

    printf("Digite a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    //ATENCAO!!
    //ESSA SOLUÇÃO JÁ ASSUME QUE a, b, c ESTÃO ORDENADOS EM ORDEM DECRECENTE
    //FICA COMO EXERCICIO COMPLEMENTAR O CÓDIGO PARA GARANTIR QUE ISSO SEJA VALIDO PARA QUALQUER ENTRADA!

    if (a >= b + c) {
        printf("NAO FORMA TRIANGULO\n");
    }
    else  { //se formar triângulo
        //calcula valores ao quadrado (como vai usar mais de uma vez,
        //compensa criar uma variável - ao invés de calcular de novo)//
        float a2 = a * a,
              b2 = b * b,
              c2 = c * c;

        //faz os testes para o primeiro conjunto de condições
        if (a2 == b2 + c2)
            printf("TRIANGULO RETANGULO\n");
        else if (a2 > b2 + c2)
            printf("TRIANGULO OBTUSANGULO\n");
        else
            printf("TRIANGULO ACUTANGULO\n");

        //faz os testes para o segundo conjunto de condições
        if (a == b && b == c)
            printf("TRIANGULO EQUILATERO\n");
        else if (a == b || b == c)
            printf("TRIANGULO ISOSCELES\n");

        //observe que a,b,c podem consituir mais de um tipo de triângulo!
        //Por essa razão, nem todas as condições estão em um único bloco de "else if".
    }
    return 0;
}
