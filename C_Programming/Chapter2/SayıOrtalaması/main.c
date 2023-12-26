#include <stdio.h>
#include <stdlib.h>
//Kullanýcýdan 3 sayý alan ve bunun ortalamasýný veren bir C programaý yazýnýz.
int main()
{
    float a,b,c,ortalama;
    printf("3 sayi giriniz:");
    scanf("%f%f%f",&a,&b,&c);
    ortalama=((a+b+c)/3);
    printf("Ortalama : %.2f",ortalama);

    return 0;
}
