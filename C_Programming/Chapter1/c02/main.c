#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* for (intializationStatement; testExpression; updateStatement)
    {
        statements inside the body pf loop
    }
    */

    /*int i;

    for(i=1;i<=10;i++)
    {
        printf("%d ",i);
    }

    return 0; */

    /* kullan�c�dan 1 say� girmesini isteyiniz 1 den girece�iniz say�ya kadar
    olan say�lar�n toplam�n� for d�ng�s�yle hesaplay�n�z*/

    /* int a;
    int i,toplam = 0;

    printf("Lutfen bir sayi giriniz\n");
    scanf("%d",&a);

    for(i=1;i<=a;i++)
    {
        toplam +=i;
    }
    printf("Toplam:%d",toplam);

    return 0; */

    /* 0 dan 10 a kadar olan tek say�lar� for d�ng�s� ile ekrana bast�r�n�z */

    int i;

    for(i=1;i<=10;i+=2)
    {
        printf("%d\n",i);
    }

    return 0;
}
