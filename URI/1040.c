/*Leia quatro números (N1, N2, N3, N4), cada um deles com uma casa decimal, correspondente às quatro notas de um aluno.
Calcule a média com pesos 2, 3, 4 e 1, respectivamente, para cada uma destas notas e
mostre esta média acompanhada pela mensagem "Media: ".
Se esta média for maior ou igual a 7.0, imprima a mensagem "Aluno aprovado
Se a média calculada for inferior a 5.0, imprima a mensagem "Aluno reprovado."
Se a média calculada for um valor entre 5.0 e 6.9, inclusive estas, o programa deve imprimir a mensagem "Aluno em exame.".
No caso do aluno estar em exame, leia um valor correspondente à nota do exame obtida pelo aluno.
Imprima então a mensagem "Nota do exame: " acompanhada pela nota digitada.
Recalcule a média (some a pontuação do exame com a média anteriormente calculada e divida por 2).
 imprima a mensagem "Aluno aprovado." (caso a média final seja 5.0 ou mais ) ou "Aluno reprovado.",
(caso a média tenha ficado 4.9 ou menos).
Para estes dois casos (aprovado ou reprovado após ter pego exame)
apresente na última linha uma mensagem "Media final: " seguido da média final para esse aluno.*/
#include<stdio.h>
int main()
{
    double n1,n2,n3,n4,media,exame,mediafinal;

    scanf ("%lf %lf %lf %lf",&n1,&n2,&n3,&n4);

    media = (n1*2 + n2*3 + n3*4 + n4)/10.0;
    printf("Media: %.1lf\n",media);

     if (media >= 7.0)
        printf("Aluno Aprovado");

         else if (media < 5.0){
                 printf("Aluno Reprovado");}

            else { (media >= 5.0 && media <= 6.9);
                    printf("Aluno em Exame\n");

                    printf ("Nota do exame: ");
                    scanf("%lf",&exame);
                    mediafinal = (exame + media)/2;
                    if (mediafinal >= 5)
                        printf("Aluno Aprovado\n");\
                        else
                            printf("Aluno Reprovado");
                        printf("Media: %.1lf",mediafinal);
                }

    return 0;
}

