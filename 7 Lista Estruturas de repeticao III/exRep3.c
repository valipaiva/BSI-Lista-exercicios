#include<stdio.h>

main()
{
    int n1,n2,c,d,cont=0;

    for (c=1; c<=3; c=c+1){
        for (d=1; d<=5; d=d+1){
        scanf("%d",&n1);
        scanf("%d",&n2);

        if (n1 == n2)
            printf("Valores iguais\n");

        else
            cont = cont + 1;
        }
    }

    printf("Contagem de valores diferentes %d\n",cont);
    printf("Fim\n");
}
