#include<stdio.h>
int main()
{
    int n1,n2,c,controlelaco=0;

    for(c=1; c<=10; c=c+1){
    scanf(“%d”, &n1);
    scanf(“%d”, &n2);

    if (n1==n2)
    printf(“Valores iguais\n”);

    else
    controlelaco = 1;
    break

    }
printf(“Fim\n”);
return 0;
}
