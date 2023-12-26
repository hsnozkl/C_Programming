#include <stdio.h>
#include <stdlib.h>
/*A�a��da belirtilen i�lemleri yapan bir C program� yaz�n�z.
Toplama(+) veya ��kartma(-)oparat�r� giriniz.
'+' oparat�r� i�in 1/a + 1/b; '-' oparat�r� i�in 1/a - 1/b i�lemlerinin sonucunu
basit kesir cinsinden bulunuz.
Girilen a veya b de�erlerinden biri 0 ise i�lemin yap�lamayaca��n� bir mesaj ile
belirtiniz.*/
int main()
{
    int a,b;
    char c;

    printf("Lutfen isleminizi seciniz(+,-):");
    scanf("%c",&c);
    printf("Lutfen iki tamsayi giriniz:");
    scanf("%d%d",&a,&b);
    if((a==0) || (b==0))
    {
        printf("Bu islem yapilamiyor.");
    }
    else
    {
        printf("1/%d %c 1/%d\n",a,c,b);
        switch(c)
        {
        case '+' :
            {
                printf("%d/%d",a+b,a*b);
            }
            break;
        case '-' :
            {
                printf("%d/%d",a-b,a*b);
            }
            break;
        default :
            {
                printf("Yanlis oparator girdiniz");
            }
        }
    }
    return 0;
}
