#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    /*iki adet karakter dizisi olu�turun: birincisi "bonne" ikincisi "soir�e"
    strcpy ve strncpy kullanarak iki karakter dizisini birle�tirin
    elde etti�in karakter dizisini ekrana bast�r�n*/

    /*char dizi1[]="bonne";
    char dizi2[]="soiree";
    char sonuc[100]="";

    strcpy(sonuc,dizi1);
    strncpy(sonuc+3,dizi2,5);

    printf("%s",sonuc);
    return 0; */

    /*iki boyutlu bir dizi olu�turun.Dizinin elemanlar�: iki,��,d�rt,be� olsun.
    Dizinin 4. eleman�n�n 3. karakterini ekrana bast�r�n.*/

    char can[100][100]={"bir","iki","uc","dort","bes"};

    printf("Dizimin dorduncu elemani %s\n",can[3]);
    printf("Dizimin dorduncu elemaninin ucuncu karakteri %c",can[3][2]);

    return 0;
}
