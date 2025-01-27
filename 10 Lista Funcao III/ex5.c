/*Suponha a seguinte func˜ao, a qual retorna o primeiro e o ultimo dıgito de um numero:
void removeExtremos(int *n, int *pri, int *ult){
int tn,pot = 1;
tn = *n;
while(tn >= 10){
tn = tn/10;
pot *= 10;
}
*pri = *n / pot;
*ult = *n % 10;
*n = *n % pot;
*n = *n / 10;
}
Faca um programa que utilize esta func˜ao para determinar se um determinado inteiro positivo n e
palındromo. Suponha que n n˜ao contem o dıgito 0. Atenc˜ao: voce n˜ao deve modificar a func˜ao dada no
enunciado! Apenas invoca-la de forma adequada.
*/
#include <stdio.h>
void removeExtremos(int *n, int *pri, int *ult);

void removeExtremos(int *n, int *pri, int *ult){
    int tn,pot = 1;
    tn = *n;

    while(tn >= 10){
        tn = tn/10;
        pot *= 10;
    }
    *pri = *n / pot;
    *ult = *n % 10;
    *n = *n % pot;
    *n = *n / 10;
}

int main ()
{
    int numero,resp;

    printf("Digite o numero: ");
    scanf ("%d",&numero);

    resp = removeExtremos(&numero);

   printf("%d",resp);
}
