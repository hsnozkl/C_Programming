#include <stdio.h>
#include <stdlib.h>
/*Tek haneli 3 say� olan x,y ve z yi girdi olarak alan ve y�zler basama��na x onlar
basama��na y birler basama��na z koyan ve bu say�y� bulan bir C program� yaz�n�z.*/
int main()
{
    int x,y,z,sayi_total;
    printf("Yuzler basamagi :");
    scanf("%d",&x);
    printf("Onlar basamagi :");
    scanf("%d",&y);
    printf("Birler basamagi :");
    scanf("%d",&z);
    //sayi_total=(100*x+10*y+1*z);
    printf("Sayimiz :%d%d%d",x,y,z);
    return 0;
}
