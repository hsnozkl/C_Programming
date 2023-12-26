#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
#define VARMI
#define SAYI 5
#define POWER 5
#if !defined POWER || POWER < 2
#error POWER is not defined or is less than 2
#endif
//#undef: tanýmlamýþ olduðumuz mcroyu kaldýrma.
//#error hatayý fýrlatmak için kullanýlýr.
/*#ifdef PII
successful code
#else
else code
#endif
#ifdef PI
printf("C harika gidiyot");
#else
printf("C muthis gidiyor");
#endif */
int main()
{
    /*int sayi;
    #ifdef VARMI
    sayi = 2;
    #else
    printf("Lutfen bir deger giriniz\n");
    scanf("%d",&sayi);
    #endif
    printf("Sayi degerim %d",sayi);
    return 0; */

    #if(SAYI == 5)
    printf("Sayimiz : %d",SAYI);
    #else
    printf("Sayimiz 5 den farklidir");
    #endif
    return 0;
}
