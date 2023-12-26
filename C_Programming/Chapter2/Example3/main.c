#include <stdio.h>
#include <stdlib.h>
/*Kullanýcýya bir n deðeri girmesini isteyin.
1+1/2+1/3+....1/n deðerini hesaplayýn.*/
int main()
{
    int n;
    int i;
    float sonuc;

    do
    {
        printf("N kac olsun\n");
        scanf("%d",&n);
    }
    while(n<1);

    for(i=1;i<=n;i++)
    {
        sonuc += (float)1/i;
    }
    printf("Sonucumuz :%f",sonuc);
    return 0;
}
