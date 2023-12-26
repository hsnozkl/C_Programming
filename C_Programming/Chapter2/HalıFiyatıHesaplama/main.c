#include <stdio.h>
#include <stdlib.h>
#define BIRIM 40
#define EMEK 200
int main()
{
    float metrekare,ucret;
    printf("Lutfen salonun metrekaresini giriniz\n");
    scanf("%f",&metrekare);
    ucret = (BIRIM*metrekare)+EMEK;
    printf("Toplam ucret %.2f",ucret);
    return 0;
}
