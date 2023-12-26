#include <stdio.h>
#include <stdlib.h>
/*Tek haneli 3 sayý olan x,y ve z yi girdi olarak alan ve yüzler basamaðýna x onlar
basamaðýna y birler basamaðýna z koyan ve bu sayýyý bulan bir C programý yazýnýz.*/
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
