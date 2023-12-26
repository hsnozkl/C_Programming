#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    /*iki adet karakter dizisi oluþturun: birincisi "bonne" ikincisi "soirée"
    strcpy ve strncpy kullanarak iki karakter dizisini birleþtirin
    elde ettiðin karakter dizisini ekrana bastýrýn*/

    /*char dizi1[]="bonne";
    char dizi2[]="soiree";
    char sonuc[100]="";

    strcpy(sonuc,dizi1);
    strncpy(sonuc+3,dizi2,5);

    printf("%s",sonuc);
    return 0; */

    /*iki boyutlu bir dizi oluþturun.Dizinin elemanlarý: iki,üç,dört,beþ olsun.
    Dizinin 4. elemanýnýn 3. karakterini ekrana bastýrýn.*/

    char can[100][100]={"bir","iki","uc","dort","bes"};

    printf("Dizimin dorduncu elemani %s\n",can[3]);
    printf("Dizimin dorduncu elemaninin ucuncu karakteri %c",can[3][2]);

    return 0;
}
