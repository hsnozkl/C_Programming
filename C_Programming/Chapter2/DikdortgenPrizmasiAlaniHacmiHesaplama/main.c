#include <stdio.h>
#include <stdlib.h>
/*Kullan�c�dan ald��� tam say� kenar uzunluklar� (a,b) ve y�kseklik (h) bilgisini
kullanarak bir dikd�rtgen prizmas�n�n s�ras�yla taban alan�n�, yanal alanlar�n�n
toplam�n�, toplam alan�n� ve hacmini ekrana bast�ran program�n C kodunu yaz�n�z.
�rnek
Dikd�rtgen prizmasn�n a,b ve h uzunluklar�n� giriniz: 5 7 10
Dikd�rtgen prizmasn�n:
Taban alan�: 35
Yanal alanlar toplam�: 240
Toplam alan�:310
Hacmi:350*/
int main()
{
    int a,b,h;
    int taban_alani;
    int yanal_alan;
    int toplam_alan;
    int hacim;

    printf("Lutfen a b ve h degerlerini giriniz\n");
    scanf("%d%d%d",&a,&b,&h);

    taban_alani = a*b;
    yanal_alan = 2*a*h+2*b*h;
    toplam_alan = 2*a*b+2*a*h+2*b*h;
    hacim = a*b*h;

    printf("Taban alani=%d\n",taban_alani);
    printf("Yanal alanlar toplami=%d\n",yanal_alan);
    printf("Toplam alanim=%d\n",toplam_alan);
    printf("Hacmim=%d\n",hacim);
    return 0;
}
