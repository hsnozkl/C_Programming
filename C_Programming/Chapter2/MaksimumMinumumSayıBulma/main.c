#include <stdio.h>
#include <stdlib.h>
/*KUllan�c�dan 3 farkl� tam say� girmesini isteyen, kullan�c�n�n girdi�i bu say�lar�
okuyup say�lar�n en k�����n� ve en b�y���n� ekrana bast�ran program�n C kodunu yaz�n�z.
�� farkl� tam say� giriniz: 29 78 14
En k���k say�: 14
En b�y�k say�: 78*/
int main()
{
    int a,b,c;
    int min,max;

    printf("Lutfen 3 adet sayi giriniz\n");
    scanf("%d%d%d",&a,&b,&c);

    max = a;

    if(b > max)
    {
        max = b;
    }
    if(c > max)
    {
        max = c;
    }
    printf("Maximum degerimiz %d\n",max);

    min = a;

    if(b < min)
    {
        min = b;
    }
    if(c < min)
    {
        min = c;
    }
    printf("Minumum degerimiz %d",min);

    return 0;
}
