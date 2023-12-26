#include <stdio.h>
#include <stdlib.h>
/*Kullanýcýdan pozitif bir tamsayýyý girdi olarak alýp bu sayýnýn 13 ve veya 17' ye
bölünüp bölünmediðini bularak bu durumu mesaj ile belirten bir c pragramý yazýnýz.*/
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
