#include <stdio.h>
#include <stdlib.h>
//Kullan�c�dan 3 say� alan ve bunun ortalamas�n� veren bir C programa� yaz�n�z.
int main()
{
    float a,b,c,ortalama;
    printf("3 sayi giriniz:");
    scanf("%f%f%f",&a,&b,&c);
    ortalama=((a+b+c)/3);
    printf("Ortalama : %.2f",ortalama);

    return 0;
}
