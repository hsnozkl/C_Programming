#include <stdio.h>
#include <stdlib.h>
/*Kullan�c�n�n girdi�i bir n say�s�na kadar olan t�m tam say�lar�n toplam�n� hesaplay�p
d�zg�n bir �ekilde ekrana bast�ran bir program yaz�n. �rnek:
Bir say� giriniz: 8
1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 = 36*/
int main()
{
    int a,i,sonuc;

    printf("Lutfen bir sayi giriniz\n");
    scanf("%d",&a);

    sonuc = 0;
    i = 1;
    while(i <= a)
    {
        if(i == a)
        {
            printf("%d",a);
        }
        else
        {
            printf("%d + ",i);
        }
        sonuc = sonuc + i;
        i++;
    }
     printf(" = %d",sonuc);
    return 0;
}
