#include <stdio.h>
#include <stdlib.h>
/*Bir üçgenin açýlarýný girdi olarak alan ve bu üçgenin eþitkenar,
ikizkenar veya çeþitkenar üçgen olup olmadýðýný belirleyen bir C
programý yazýnýz. Açýlarýn üçgen oluþturup oluþturmadýðý da kontrol
edilmelidir.*/
int main()
{
    int x;
    int y;
    int z;

    printf("Lutfen 3 adet aci giriniz:\n");
    scanf("%d %d %d",&x,&y,&z);
    if(x+y+z==180)
    {
        if(x==60 && y==60 && z==60)
        {
            printf("Bu bir esit kenar ucgendir.");
        }
        else if(x==y || x==z || y==z)
        {
                printf("Bu bir ikiz kenar ucgendir.");
        }
        else
        {
            printf("Bu bir cesitkenar ucgendir");
        }
    }
    else
    {
        printf("Acilar ucgen olusturmuyor");
    }
    return 0;
}
