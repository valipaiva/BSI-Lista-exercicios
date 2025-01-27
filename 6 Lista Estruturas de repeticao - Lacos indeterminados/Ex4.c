/*Chico tem 1,50 metro e cresce 2 centımetros por ano, enquanto Ze tem 1,10 metro e cresce 3 centımetros por ano.
Construa um programa que calcule e imprima quantos anos ser˜ao necessarios para que Ze seja maior que Chico.*/
#include <stdio.h>
int main()
{
    int cont=0;
    float altura_chico=150,altura_ze=110;

    while (altura_ze < altura_chico){
        altura_ze = altura_ze+3;
        altura_chico = altura_chico+2;
        cont++;}

    printf("Sao necessario %d anos",cont);

return 0;
}

