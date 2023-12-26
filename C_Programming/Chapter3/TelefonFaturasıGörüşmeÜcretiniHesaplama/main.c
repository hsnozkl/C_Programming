#include <stdio.h>
#include <stdlib.h>
/*Bir telefon þirketi telefonda 3 dakikaya kadar konuþmanýn ücretini 0,25TL olarak
belirlemiþtir. Ancak þirket, konuþma süresi 3 dakikayý aþtýðý durumda bundan
sonraki her dakika için ek olarak 0,08TL almaktadýr. Telefon görüþmesinin süresini
dakika cinsinden girdi olarak alan ve konuþmanýn ücretini hesaplayan bir C programý
yazýnýz.*/
int main()
{
    float sure,ucret;
    printf("Telefon konusma suresi :\n");
    scanf("%f",&sure);
    if(sure<=3)
    {
        ucret=0.25;
    }
    else
    {
        ucret=0.25+(sure)*0.08;
    }
    printf("Ucret :%f",ucret);
    return 0;
}
