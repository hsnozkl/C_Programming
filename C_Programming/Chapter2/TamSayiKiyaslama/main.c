#include <stdio.h>
#include <stdlib.h>
/*(a)Kullan�c�n�n girdi�i 2 tam say�dan, ilkinin ikincisi ile kar��la�t�r�p e�it olup
olmad���n�, e�er e�it de�ilse ikincisinden b�y�k m� yoksa k���k m� oldu�unu ekrana
bast�ran bir program yaz�n. �rnek:
�ki adet say� giriniz: 89 76
89 76 ya e�it de�ildir
89 76 dan daha b�y�kt�r
(b)yazd���n�z program� birinci say�n�n ikincinin kat� olup olmad���n� ekrana bast�racak
�ekilde de�i�tirin. �rnek:
�ki adet say� giriniz: 65 13
65 13 e e�it de�ildir
65 13 ten b�y�kt�r
65 13 �n kat�d�r*/
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
