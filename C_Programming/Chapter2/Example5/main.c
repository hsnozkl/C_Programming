#include <stdio.h>
#include <stdlib.h>
/*�ki say�n�n �arp�m� de�erinin pozitif mi negatif mi oldu�unu g�steren bir C
program� yaz�n.
Her iki say�dan biri 0 sa �arp�m de�eri 0 d�r.
Her iki say� negatif veya pozitifse �arp�m de�eri pozitiftir.
De�ilse �arp�m de�eri negatiftir. */
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
