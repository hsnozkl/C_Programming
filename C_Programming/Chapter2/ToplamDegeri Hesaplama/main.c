#include <stdio.h>
#include <stdlib.h>
/*Kullanýcýnýn girdiði bir n sayýsýna kadar olan tüm tam sayýlarýn toplamýný hesaplayýp
düzgün bir þekilde ekrana bastýran bir program yazýn. Örnek:
Bir sayý giriniz: 8
1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 = 36*/
int main()
{
    int a,i,sonuc;

    printf("Lutfen bir sayi giriniz\n");
    scanf("%d",&a);

    sonuc = 0;
    i = 1;
    while(i <= a)
    {
        if(i == a)
        {
            printf("%d",a);
        }
        else
        {
            printf("%d + ",i);
        }
        sonuc = sonuc + i;
        i++;
    }
     printf(" = %d",sonuc);
    return 0;
}
