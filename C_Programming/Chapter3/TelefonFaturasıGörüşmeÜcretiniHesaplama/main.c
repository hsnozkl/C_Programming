#include <stdio.h>
#include <stdlib.h>
/*Bir telefon �irketi telefonda 3 dakikaya kadar konu�man�n �cretini 0,25TL olarak
belirlemi�tir. Ancak �irket, konu�ma s�resi 3 dakikay� a�t��� durumda bundan
sonraki her dakika i�in ek olarak 0,08TL almaktad�r. Telefon g�r��mesinin s�resini
dakika cinsinden girdi olarak alan ve konu�man�n �cretini hesaplayan bir C program�
yaz�n�z.*/
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
