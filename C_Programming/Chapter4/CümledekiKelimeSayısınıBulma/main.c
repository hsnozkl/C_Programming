#include <stdio.h>
#include <stdlib.h>
/*Klavyeden girilen bir cümledeki kelime sayýsýný bulan C programýný yazýnýz.*/
int main()
{
    char cumle[100];
    int i;
    int sayac;

    i = 0;
    sayac = 0;
    printf("Lutfen bir cumle giriniz\n");
    gets(cumle);

    while(cumle[i])
    {
        if(cumle[i]== 32)
        {
            sayac++;
        }
        i++;
    }
    printf("Girilen cumledeki kelime sayisi:%d\n",sayac+1);
    return 0;
}
