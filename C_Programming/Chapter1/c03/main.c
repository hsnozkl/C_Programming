#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i = 0;

    while(i<10)
    {
        printf("%d\n",i);
        i++;
    }
    return 0; 

    /* Bir sayı giriniz: 100
    100
    200
    300
    400
    500
    600
    700
    800
    900
    1000 */

    int a;

    printf("Lutfen bir sayi giriniz\n");
    scanf("%d",&a);

    int i = 1;

    while(i<=10)
    {
        printf("%d\n",i*a);
        i++;
    }
    return 0; 

    /* 0 dan 10 a kadar olan tek ve çift sayıları while döngüsü
    kullanarak bastırınız */

    int i=0;
    while(i<10)
    {
        printf("%d ",i);
        i+=2;
    }

    return 0; */

    10 dan başlayıp bir azalta azalta 1 e kadar olan sayıları
    ekrana bastırınız*/

    /int i = 10;
    while(i>=1)
    {
        printf("%d\n",i);
        i--;
    }

    return 0; 

     /* Bir sayı giriniz: 100
    100
    200
    300
    400
    500
    600
    700
    800
    900
    1000 */

    int a;

    printf("Lutfen bir sayi giriniz\n");
    scanf("%d",&a);

    int i = 1;

    do
    {
        printf("%d\n",i*a);
        i++;
    }
    while(i<=10);

    return 0; */


}
