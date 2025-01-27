int main (void) {
    float a, b, c;

    printf("Digite a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    //ATENCAO!!
    //ESSA SOLU��O J� ASSUME QUE a, b, c EST�O ORDENADOS EM ORDEM DECRECENTE
    //FICA COMO EXERCICIO COMPLEMENTAR O C�DIGO PARA GARANTIR QUE ISSO SEJA VALIDO PARA QUALQUER ENTRADA!

    if (a >= b + c) {
        printf("NAO FORMA TRIANGULO\n");
    }
    else  { //se formar tri�ngulo
        //calcula valores ao quadrado (como vai usar mais de uma vez,
        //compensa criar uma vari�vel - ao inv�s de calcular de novo)//
        float a2 = a * a,
              b2 = b * b,
              c2 = c * c;

        //faz os testes para o primeiro conjunto de condi��es
        if (a2 == b2 + c2)
            printf("TRIANGULO RETANGULO\n");
        else if (a2 > b2 + c2)
            printf("TRIANGULO OBTUSANGULO\n");
        else
            printf("TRIANGULO ACUTANGULO\n");

        //faz os testes para o segundo conjunto de condi��es
        if (a == b && b == c)
            printf("TRIANGULO EQUILATERO\n");
        else if (a == b || b == c)
            printf("TRIANGULO ISOSCELES\n");

        //observe que a,b,c podem consituir mais de um tipo de tri�ngulo!
        //Por essa raz�o, nem todas as condi��es est�o em um �nico bloco de "else if".
    }
    return 0;
}
