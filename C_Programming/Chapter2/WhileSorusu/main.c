#include <stdio.h>
#include <stdlib.h>
/*While d�ng�s� kullanarak a�a��daki ��kt�s� g�r�nen program� yaz�n. �rnek:
Bir adet say� giriniz: 23
23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1*/
int main()
{
    int a;

    printf("Lutfen bir deger giriniz\n");
    scanf("%d",&a);

    while(a != 0)
    {
        printf("%4d",a);
        a = a-1;
    }
    return 0;
}
