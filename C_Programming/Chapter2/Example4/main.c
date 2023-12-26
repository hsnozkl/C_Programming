#include <stdio.h>
#include <stdlib.h>
/*Kullanýcýdan pozitif bir tam sayý girmesini isteyin
Girdiðiniz sayýnýn karekökünü hesaplayýn.
Girdiðiniz sayý negatifse yeni sayý girmesini isteyin.
Girdiðiniz sayý 0 ise program çalýþmayý durdursun.*/
int main()
{
    float x;
    do
    {
        printf("Bir pazitif sayi giriniz");
        scanf("%f",&x);
        if(x<0)
        {
            printf("Lutfen bir pozitif sayi giriniz\n");
        }
        if(x<0)continue;
        printf("Sayimizin karekoku :%f\n",sqrt(x));
    }
    while(x);
    return 0;
}
