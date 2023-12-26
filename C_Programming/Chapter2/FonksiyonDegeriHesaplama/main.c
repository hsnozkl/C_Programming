#include <stdio.h>
#include <stdlib.h>
/*Kullanýcý tarafýndan girilen reel bir sayýnýn aþaðýda verilen f fonksiyonuna göre
f(x) deðerini hesaplayýp döndüren bir program yazýnýz. Örnek:
f(x) = r^3 + 13x^2 + 47x + 5
Bir deðer giriniz: 2.43
>> f(2.430) = 210.323 */
int main()
{
    float x;

    printf("Lutfen bir deger giriniz\n");
    scanf("%f",&x);

    printf(">> f(%.3f) = %.3f",x,x*x*x+13*x*x+47*x+5);
    return 0;
}
