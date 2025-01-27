#include<stdio.h>

main()
{
    int n1,n2,c,cont=0;

    for (c=1; c<=10; c=c+1){
        scanf("%d",&n1);
        scanf("%d",&n2);

        if (n1 == n2)
            printf("Valores iguais\n");

        else
            cont = cont + 1;

 }
    printf("Contagem de diferentes %d\n",cont);
    printf("Fim\n");


}
