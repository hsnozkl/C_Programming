#include <stdio.h>
#include <stdlib.h>
/*Klavyeden girilen bir cümlenin kaç karakterden oluþtuðunu strlen() fonksiyonunu
kullanmadan bulan C programýný yazýnýz.*/
int main()
{
    char cumle[100];
    int i;

    i = 0;
    printf("Lutfen bir cumle giriniz\n");
    gets(cumle);

    while(cumle[i])
    {
        i++;
    }
    printf("Cumledeki karakter sayisi : %d\n",i);
    return 0;
}

/*int main() {
    char cumle[100];
    int karakter_sayisi = 0;

    printf("Bir cumle girin: ");
    fgets(cumle, sizeof(cumle), stdin);

    int i = 0;
    while (cumle[i] != '\0') {
        if (cumle[i] != ' ' && cumle[i] != '\n') {
            karakter_sayisi++;
        }
        i++;
    }

    printf("Cumle %d karakterden olusuyor.\n", karakter_sayisi);

    return 0;
}*/
