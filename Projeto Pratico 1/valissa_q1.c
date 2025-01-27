//Autor: Thalles Vaz Fluminhan
//Matricula: 2128071
//Autor: Valissa Rodrigues de Paiva
//Matricula: 2128098

#include <stdio.h>
#include <stdlib.h>

int ds (int ano);
int anobissexto(int ano);
void imprimir (int ano, int diasemana, int bissexto);

main()
{   int ano, diasemana, bissexto;

    printf ("Digite o ano: ");
    scanf ("%d", &ano);

   diasemana = ds (ano);

   bissexto = anobissexto (ano);

   imprimir(ano, diasemana, bissexto);
}

int ds (int ano) //função para definir o dia da semana
{
    int diasemana;
    //formula em http://arcaz.dainf.ct.utfpr.edu.br/rea/files/original/b638596b01aae0a52c36e987c09ac053.pdf
    diasemana =  ((ano%100) + ((ano%100)/4) + (ano/400) + 5 * (ano/100))%7;
    //printf("%d",diasemana); //retorna sendo o 0 domingo, 1 segunda, 3 terca..
return diasemana;

}
int anobissexto (int ano) //funcao para definir se o ano eh bissexto ou não - não funciona corretamente
{
    if(ano% 4==0 && ano%100 != 0 || ano%400==0)
    return 1; //ano bissexto
    else return 0; //ano nao bissexto

}
void imprimir (int ano, int diasemana, int bissexto)//para imprimir o calendario com cabecalho
{
	int  qtdDias,dia,mes;

     for (mes= 1; mes <= 12; mes++ ) { //imprime o mês e define a quantidade de dias
          if (mes == 1) //1para janeiro
          {
              printf("\n\n     JANEIRO  %d",ano);
              qtdDias = 31;
          }
          else if (mes == 2)
          {
               printf("\n\n       FEVEREIRO  %d",ano); //Chamada da função bissexto
               qtdDias = bissexto ? 29 : 28; //utilizando o operador ? - substitui uma utilização de if
          }
            else if (mes == 3)
            {
               printf("\n\n     MARCO  %d",ano);
               qtdDias = 31;
            }
             else if (mes == 4)
             {
               printf("\n\n     ABRIL  %d",ano);
               qtdDias = 30;
             }
             else if (mes == 5)
             {
               printf("\n\n     MAIO  %d",ano);
               qtdDias = 31;
             }
             else if (mes == 6)
            {
               printf("\n\n     JUNHO  %d",ano);
               qtdDias = 30;
             }
             else if (mes == 7)
             { printf("\n\n     JULHO  %d",ano);
               qtdDias = 31;
             }
             else if (mes == 8)
             {
               printf("\n\n     AGOSTO   %d",ano);
               qtdDias = 31;
             }
             else if (mes == 9)
             {
               printf("\n\n     SETEMBRO   %d",ano);
               qtdDias = 30;
             }
             else if (mes == 10)
             {
               printf("\n\n     OUTUBRO   %d",ano);
               qtdDias = 31;
             }
              else if (mes == 11)
              {
                printf("\n\n        NOVEMBRO  %d",ano);
                qtdDias = 30;
              }
              else
               {
                   printf("\n\n        DEZEMBRO  %d",ano);
                   qtdDias = 31;
               }

          printf("\n\nDom  Seg  Ter  Qua  Qui  Sex  Sab\n");
          //imprimir dias de cada mês
          for (dia = 1; dia <= 1 + diasemana * 5; dia++)
               printf(" ");
          for (dia = 1; dia <= qtdDias; dia++) {
               printf("%2d", dia);
               if ((dia + diasemana) % 7 > 0)
                    printf("   ");
               else
                    printf("\n "); //pular linha para comecar semana
          }
          diasemana = (diasemana + qtdDias) % 7; //inicializar a variavel diasemana para próximo mês
     }
}
