#include <stdio.h>

int main()
{
    int horaInicial, minutoInicial,
        horaFinal, minutoFinal,
        duracaoHoras, duracaoMinutos;

    printf("Digite horaInicial, minutoInicial, horaFinal e minutoFinal: ");
    scanf("%d %d %d %d", &horaInicial, &minutoInicial, &horaFinal, &minutoFinal);

    if (horaInicial < horaFinal)
        duracaoHoras = horaFinal - horaInicial; //neste caso, basta fazer a diferen�a das horas
    else
        duracaoHoras = 24 - (horaInicial - horaFinal);
        //observe que se as horas forem iguais, assume-se que a dura��o � de 24 horas
        //a "sacada" do exerc�cio consiste em fazer essa diferen�a de 24 - (duracao). Justifique porque funciona!
    if (minutoInicial <= minutoFinal)
        duracaoMinutos = minutoFinal - minutoInicial;
    else{
        duracaoMinutos = 60 - (minutoInicial - minutoFinal);
        //subtrair de 60 segue a mesma l�gica das horas
        duracaoHoras = duracaoHoras - 1; //voc� consegue justificar pq este ajuste � necess�rio?
    }

    printf("O jogo teve duracao de %d hora(s) e %d minuto(s)\n", duracaoHoras, duracaoMinutos);

    return 0;
}
