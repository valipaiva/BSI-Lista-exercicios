#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CHEGADA 70

int main(void){
    int posL = 1;
    int movL[] = {0, 0, 9, 9, -12, 1, 1, 1, -2, -2};

    int posT = 1;
    int movT[] = {3, 3, 3, 3, 3, -6, -6, 1, 1, 1};

    srand ( time(NULL) );
    while (posL<CHEGADA && posT<CHEGADA) {
        if (posL == posT)
            printf("AI!!!!");
        else {
            for(int i=0; i<CHEGADA; i++) {
                if (i == posL-1)
                    printf("L");
                if (i == posT-1)
                    printf("T");
                else printf(" ");
            }
        }
        printf("\n");
        int randL = rand()%10+1;
        int randT = rand()%10+1;
        posL += movL[randL];
        posT += movT[randT];
        if (posL < 1) posL = 1;
        if (posT < 1) posT = 1;
    }
    if (posL>=CHEGADA) {
        if (posT>=CHEGADA) {
            printf("EMPATE!!!\n");
        }
        else printf("Ohhh...\n");
    }
    else printf("TARTARUGA VENCEU!!! VALEU!!!\n");
}
