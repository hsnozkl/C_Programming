#include <stdio.h>
#include <stdlib.h>
/*Klavyeden girilen bir cümlenin harflerinin alt alta yazdýrýlmasý saðlayan C
programýný yazýnýz.*/
int main()
{
    char cumle[100];
    int i;

    printf("Lutfen bir cumle giriniz\n");
    gets(cumle);

    for(i=0;cumle[i];i++)
    {
        printf("%c\n",cumle[i]);
    }
    return 0;
}
