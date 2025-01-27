#include<stdio.h>
int main()
{
    int cxlargura,cxaltura,cxprof,janlargura,janaltura;

    scanf("%d%d%d",&cxlargura,&cxaltura,&cxprof);
    scanf("%d%d",&janlargura,&janaltura);

    if (cxlargura <= janlargura && cxaltura <= janaltura){
        printf("S");
    }
    else
    if (cxlargura <= janaltura && cxaltura <= janlargura){
        printf("S");
    }
    else
    if (cxaltura <= janaltura && cxprof <= janlargura){
        printf("S");
    }
    else
    if (cxprof <= janaltura && cxaltura <= janaltura){
        printf("S");
    }
    else
    if (cxlargura <= janlargura && cxprof <= janaltura){
        printf("S");
    }
     else
    if (cxprof <= janlargura && cxprof <= janaltura){
        printf("S");
    }
    else
        printf("N");

 return 0;
}
