#include <stdio.h>
#include <stdlib.h>
/*Kullan�c�dan pozitif bir tam say� girmesini isteyin
Girdi�iniz say�n�n karek�k�n� hesaplay�n.
Girdi�iniz say� negatifse yeni say� girmesini isteyin.
Girdi�iniz say� 0 ise program �al��may� durdursun.*/
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
