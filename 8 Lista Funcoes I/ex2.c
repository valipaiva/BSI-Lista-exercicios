/*Escreva uma func˜ao que recebe as 3 notas de um aluno por parametro e uma letra. Se a letra for A, o procedimento
calcula a media aritmetica das notas do aluno e se for P, a sua media ponderada (pesos: 5, 3 e 2). A media calculada
deve ser retornada por parametro. OBS.: para comparar caracteres, lembre-se do apostrofo - if (tipoMedia == ’F’).
Prototipo:
float calculaMedia(float nota1, float nota2, float nota3, char tipoMedia)*/
#include<stdio.h>

float calculaMedia(float n1, float n2, float n3, char tipoMedia)
    { float resultado;
        if (tipoMedia == 'A')
        {resultado = ((n1+n2+n3)/3);}

   else if (tipoMedia == 'P')
      {resultado = ((n1*5 + n2*3 + n3*2)/10);}
        //printf("%f",resultado);
      return resultado;
    }

int main()
{
    float nota1,nota2,nota3,media;
    char proced;

    printf("Qual o procedimento (A ou P): ");
    scanf("%c",&proced);

    printf("Qual as notas do aluno: ");
    scanf("%f %f %f",&nota1,&nota2,&nota3);

    media = calculaMedia(nota1,nota2,nota3,proced);

    printf("Media = %.1f",media);

return 0;
}
