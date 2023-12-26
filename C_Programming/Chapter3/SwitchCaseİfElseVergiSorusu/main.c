#include <stdio.h>
#include <stdlib.h>
#define VERGI_kitap 4.0
#define VERGI_temelgida 5.6
#define VERGI_luks 19.6
#define KITAP 0
#define TEMELGIDA 1
#define LUKS 2
/*Üç adet ürünümüz var: Kitap, Temel Gýda ve Lüks
Devlet her üç gruba farklý oranlarda vergi uyguluyor. Kitap için %4.0, temel gýda
için %5.6, lüks ürün gammý için %19,6
Her ürünün bir kodu var: Kitabýn kodu 0, Temel gýdanýn kodu 1, Lüks ürünün kodu 2
Kullanýcýdan istediðiniz ürünün kodunu ve fiyatýný isteyen daha sonra Switch case
yapýsýný kullanarak son fiyat ekrana bastýran bir C programý yazýnýz.
Ayný programý if else yapýsý kullanarak yazýnýz.*/
int main()
{
    int kod;
    float fiyat;

    printf("Lutfen urunun fiyatini ve kodunu giriniz\n");
    scanf("%f %d",&fiyat,&kod);
    printf("Urunumuzun satis fiyatý: ");

    if(kod==KITAP)
    {
        printf("Fiyatimiz %f",fiyat+fiyat*VERGI_kitap/100);
    }
    else if(kod==TEMELGIDA)
    {
        printf("Fiyatimiz %f",fiyat+fiyat*VERGI_temelgida/100);
    }
    else if(kod==LUKS)
    {
        printf("Fiyatimiz %f",fiyat+fiyat*VERGI_luks/100);
    }
    else
    {
        printf("Lutfen dogru bir kod giriniz");
    }
    return 0;

    /*switch(kod)
    {
        case KITAP : printf("Fiyatimiz %f",fiyat+fiyat*VERGI_kitap/100);
        break;
        case TEMELGIDA : printf("Fiyatimiz %f",fiyat+fiyat*VERGI_temelgida/100);
        break;
        case LUKS : printf("Fiyatimiz %f",fiyat+fiyat*VERGI_luks/100);
        break;
        default : printf("Lutfen doðru bir kod giriniz");
    }
    return 0;*/
}
