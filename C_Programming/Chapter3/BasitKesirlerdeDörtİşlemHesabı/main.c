#include <stdio.h>
#include <stdlib.h>
/*Aþaðýda belirtilen iþlemleri yapan bir C programý yazýnýz.
Toplama(+) veya çýkartma(-)oparatörü giriniz.
'+' oparatörü için 1/a + 1/b; '-' oparatörü için 1/a - 1/b iþlemlerinin sonucunu
basit kesir cinsinden bulunuz.
Girilen a veya b deðerlerinden biri 0 ise iþlemin yapýlamayacaðýný bir mesaj ile
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
