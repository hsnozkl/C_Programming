#include <stdio.h>
#include <stdlib.h>
/*Kullanýcýdan büyük harf tipinde karakter girmesini isteyin. Eðer girdiðiniz
karakter büyük harf ise küçük harf olarak bastýrýn. Eðer girdiðiniz karakter küçük
harfse ekrana hata mesajý bastýrýn.*/
int main()
{
    char a;
    printf("Lutfen bir karakter giriniz :");
    scanf("%c",&a);
    if((a>='A') && (a<='Z'))
    {
        //a+=31;
        //a++;

        printf("Karakterimiz :%c\n",tolower(a));
    }
    else
    {
        printf("Yanlis bir karakter girdiniz");
    }
    return 0;
}
