#include <stdio.h>
#include <stdlib.h>

/*Kullan�c�dan girmesini istedi�i a,b,c ve x de�erlerini kullanarak a�a��daki aritmetik
i�lemin sonucunu hesaplayan ve ekrana basan C program�n� yaz�n�z.
ar^2+br+c=?
a, b, c, x = 5 6 7 8
375*/
int main()
{
    int a,b,c,x;
    int sonuc;

    printf("Lutfen a b c ve x degerlerini giriniz\n");
    scanf("%d%d%d%d",&a,&b,&c,&x);
    sonuc = ((a*x*x)+(b*x)+c);

    printf("ax^2 + bx + c degerim = %d",sonuc);
    return 0;
}
