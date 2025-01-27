/*Escreva uma fun�c�ao que recebe as 3 notas de um aluno por par�ametro e uma letra. Se a letra for A, o procedimento
calcula a m�edia aritm�etica das notas do aluno e se for P, a sua m�edia ponderada (pesos: 5, 3 e 2). A m�edia calculada
deve ser retornada por par�ametro. OBS.: para comparar caracteres, lembre-se do ap�ostrofo - if (tipoMedia == �F�).
Prototipo:
float calculaMedia(float nota1, float nota2, float nota3, char tipoMedia)
*/
#include<stdio.h>

float calculaMedia(float nota1, float nota2, float nota3, char tipoMedia);

int main()
{
    //declaracao das variaveis
    float n1, n2, n3;
    char tipo;

    //leitura das entradas! O ideal eh fazer consistencia dos dados de entrada para evitar problemas!
    //tente digitar uma letra diferente de A ou P para ver o comportamento do programa
    printf("Digite as notas das tres provas: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    fflush(stdin); //para limpar o buffer do teclado! Comente a linha e veja o que acontece!! No linux, use __fpurge()
    printf("Qual o tipo de media (A - aritmetica, P - ponderada): ");
    scanf("%c", &tipo);

    printf("A media eh: %.2f", calculaMedia(n1, n2, n3, tipo));

    return 0;
}

float calculaMedia(float nota1, float nota2, float nota3, char tipoMedia)
{
    // voc� tamb�m poderia criar uma vari�vel m�dia, atribuir o valor da express�o adequada e fazer return(media) ap�s o if-else.
    if(tipoMedia=='A')
        return((nota1+nota2+nota3)/3);
    else if(tipoMedia=='P')
        return((nota1*5+nota2*3+nota3*2)/10);
}
