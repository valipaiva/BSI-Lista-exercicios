//Sierpinski triangle
#include <stdio.h>

#define SIZE (1 << 4) //colocar em nivel 1 o bit 5, que é o mesmo que multiplicar nesse caso 16
int main ()
{
    int x, y, i;

    for (y = SIZE - 1; y >= 0; y--, putchar ('\n')) {
        for (i = 0; i < y; i++)
            putchar (' ');
            for (x = 0; x + y < SIZE ; x++)
                printf ((x & y) ? " " : "* "); // fazer um AND bit a bit de x com os bits que compoem y
 }
 return 0;
 }
