#include <stdio.h>
#include <stdlib.h>
/*Kullanýcý tarafýndan girilen ik tam saýının çarpýmýnýn iþaretini, sayýlarý çarpmadan
bulan bir program yazýn. Örnek:
Ýki deðer giriniz: -3 432
>> sign(-3*432)= -1
Ýki deðer giriniz: 10 5
>> sign(10*5)= +1
Ýki deðer giriniz: 10 5
>> sign(0*78)= 0*/
int main()
{
    int a,b;

    printf("Lutfen 2 adet sayi giriniz\n");
    scanf("%d%d",&a,&b);

    if((a>0 && b>0) || (a<0 && b<0))
    {
        printf(">> sign(%d*%d)= +1",a,b);
    }
    else if((a>0 && b<0) || (a<0 && b>0))
    {
        printf(">> sign(%d*%d)= -1",a,b);
    }
    else
    {
        printf(">> sign(%d*%d)= 0",a,b);
    }
    return 0;
}
