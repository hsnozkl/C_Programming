#include <stdio.h>
#include <stdlib.h>
/*Ýki sayýnýn çarpýmý deðerinin pozitif mi negatif mi olduðunu gösteren bir C
programý yazýn.
Her iki sayýdan biri 0 sa çarpým deðeri 0 dýr.
Her iki sayý negatif veya pozitifse çarpým deðeri pozitiftir.
Deðilse çarpým deðeri negatiftir. */
int main()
{
    int x,y;
    printf("Lutfen 2 adet sayi giriniz:\n");
    scanf("%d %d",&x,&y);

    if((x==0) || (y==0))
    {
        printf("Carpim degeri 0 'dir.");
    }
    else if((x<1 && y<1) || (x>0 && y>0))
    {
        printf("Carpim degeri pozitifdir");
    }
    else
    {
        printf("Carpim degeri negatifdir");
    }
    return 0;
}
