#include <stdio.h>
#include <stdlib.h>
/*KUllanýcýdan 3 farklý tam sayý girmesini isteyen, kullanýcýnýn girdiði bu sayýlarý
okuyup sayýlarýn en küçüðünü ve en büyüðünü ekrana bastýran programýn C kodunu yazýnýz.
Üç farklý tam sayý giriniz: 29 78 14
En küçük sayý: 14
En büyük sayý: 78*/
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
