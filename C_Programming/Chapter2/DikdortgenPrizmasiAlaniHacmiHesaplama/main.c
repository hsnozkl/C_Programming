#include <stdio.h>
#include <stdlib.h>
/*Kullanýcýdan aldýðý tam sayý kenar uzunluklarý (a,b) ve yükseklik (h) bilgisini
kullanarak bir dikdörtgen prizmasýnýn sýrasýyla taban alanýný, yanal alanlarýnýn
toplamýný, toplam alanýný ve hacmini ekrana bastýran programýn C kodunu yazýnýz.
Örnek
Dikdörtgen prizmasnýn a,b ve h uzunluklarýný giriniz: 5 7 10
Dikdörtgen prizmasnýn:
Taban alaný: 35
Yanal alanlar toplamý: 240
Toplam alaný:310
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
