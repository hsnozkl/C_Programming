#include <stdio.h>
#include <stdlib.h>
#define YOL 450
/*Bir arabanýn Ankara'dan Ýstanbul(450km)'a varýþ zamanýný saat cinsinden girdi
olarak alan ve arabanýn ortaþama hýzýný hesaplayan bir C programý yazýnýz.*/
int main()
{
    float ortalama_hiz,saat;
    printf("Ankara-Istanbul arasinda kac saat gecirdiniz\n");
    scanf("%f",&saat);
    ortalama_hiz=YOL/saat;
    printf("Arabanin ortalama hizi : %f",ortalama_hiz);
    return 0;
}
