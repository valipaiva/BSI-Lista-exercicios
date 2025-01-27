#include <stdio.h>

int main()
{
    int horaInicial, minutoInicial,
        horaFinal, minutoFinal,
        duracaoHoras, duracaoMinutos;

    printf("Digite horaInicial, minutoInicial, horaFinal e minutoFinal: ");
    scanf("%d %d %d %d", &horaInicial, &minutoInicial, &horaFinal, &minutoFinal);

    if (horaInicial < horaFinal)
        duracaoHoras = horaFinal - horaInicial; //neste caso, basta fazer a diferença das horas
    else
        duracaoHoras = 24 - (horaInicial - horaFinal);
        //observe que se as horas forem iguais, assume-se que a duração é de 24 horas
        //a "sacada" do exercício consiste em fazer essa diferença de 24 - (duracao). Justifique porque funciona!
    if (minutoInicial <= minutoFinal)
        duracaoMinutos = minutoFinal - minutoInicial;
    else{
        duracaoMinutos = 60 - (minutoInicial - minutoFinal);
        //subtrair de 60 segue a mesma lógica das horas
        duracaoHoras = duracaoHoras - 1; //você consegue justificar pq este ajuste é necessário?
    }

    printf("O jogo teve duracao de %d hora(s) e %d minuto(s)\n", duracaoHoras, duracaoMinutos);

    return 0;
}
