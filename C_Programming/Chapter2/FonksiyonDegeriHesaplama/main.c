#include <stdio.h>
#include <stdlib.h>
/*Kullan�c� taraf�ndan girilen reel bir say�n�n a�a��da verilen f fonksiyonuna g�re
f(x) de�erini hesaplay�p d�nd�ren bir program yaz�n�z. �rnek:
f(x) = r^3 + 13x^2 + 47x + 5
Bir de�er giriniz: 2.43
>> f(2.430) = 210.323 */
int main()
{
    float x;

    printf("Lutfen bir deger giriniz\n");
    scanf("%f",&x);

    printf(">> f(%.3f) = %.3f",x,x*x*x+13*x*x+47*x+5);
    return 0;
}
