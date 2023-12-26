#include <stdio.h>
#include <stdlib.h>

int main()
{
    char kod;
    float alan,ucret;

    ucret = 0;
    printf("Hali tipi T B S\n");
    scanf("%c",&kod);
    printf("Lutfen alani giriniz\n");
    scanf("%f",&alan);
    if(kod=='T')
    {
        ucret = alan*18;
        printf("Toplam ucret %.2f",ucret);
    }
    else if(kod=='B')
    {
        ucret = alan*17;
        printf("Toplam ucret %.2f",ucret);
    }
    else if(kod=='S')
    {
        ucret = alan*19;
        printf("Toplam ucret %.2f",ucret);
    }
    else
    {
        printf("Kod dogru degil");
    }
    return 0;
}
