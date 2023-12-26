#include <stdio.h>
#include <stdlib.h>
/*(a)Kullanýcýnýn girdiði 2 tam sayýdan, ilkinin ikincisi ile karþýlaþtýrýp eþit olup
olmadýðýný, eðer eþit deðilse ikincisinden büyük mü yoksa küçük mü olduðunu ekrana
bastýran bir program yazýn. Örnek:
Ýki adet sayý giriniz: 89 76
89 76 ya eþit deðildir
89 76 dan daha büyüktür
(b)yazdýðýnýz programý birinci sayýnýn ikincinin katý olup olmadýðýný ekrana bastýracak
þekilde deðiþtirin. Örnek:
Ýki adet sayý giriniz: 65 13
65 13 e eþit deðildir
65 13 ten büyüktür
65 13 ün katýdýr*/
int main()
{
    int a,b;

    printf("Lutfen 2 adet sayi giriniz\n");
    scanf("%d%d",&a,&b);

    if(a == b)
    {
        printf("2 sayi birbirine esittir\n");
    }
    if(a != b)
    {
        printf("2 sayi birbirine esit degildir\n");
    }
     if(a < b)
    {
        printf("A degerim B den kucuktur\n");
    }
    if(a > b)
    {
        printf("A degerim B den buyuktur\n");
    }
    if(a % b == 0)
    {
        printf("A B nin katidir");
    }
    else
    {
        printf("A B nin kati degildir");
    }

    return 0;

}
