#include <stdio.h>
#include <stdlib.h>
/*Kullan�c�dan pozitif bir tamsay�y� girdi olarak al�p bu say�n�n 13 ve veya 17' ye
b�l�n�p b�l�nmedi�ini bularak bu durumu mesaj ile belirten bir c pragram� yaz�n�z.*/
int main()
{
    int n;
    printf("Bir sayi giriniz\n");
    scanf("%d",&n);

    if((n%13==0)&&(n%17==0))
    {
        printf("Sayimiz 13 ve 17 ye bolunuyor");
    }
    else if(n%13==0)
    {
        printf("Sayimiz 13 e bolunuyor");
    }
    else if(n%17==0)
    {
        printf("Sayimiz 17 ye bolunuyor");
    }
    else
    {
        printf("Sayimiz 13 ve 17 ye bolunmuyor");
    }
    return 0;
}
