#include <stdio.h>
#include <stdlib.h>
/*Bir ��genin a��lar�n� girdi olarak alan ve bu ��genin e�itkenar,
ikizkenar veya �e�itkenar ��gen olup olmad���n� belirleyen bir C
program� yaz�n�z. A��lar�n ��gen olu�turup olu�turmad��� da kontrol
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
