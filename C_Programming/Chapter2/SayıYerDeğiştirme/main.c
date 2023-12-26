#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("A sayisini giriniz\n");
    scanf("%d",&a);
    printf("B sayisini giriniz\n");
    scanf("%d",&b);
    c = a;
    a = b;
    b = c;
    printf("A sayisi: %d\nB sayisi: %d",a,b);
    return 0;
}
