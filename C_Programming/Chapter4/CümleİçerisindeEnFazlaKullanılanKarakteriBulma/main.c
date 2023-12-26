#include <stdio.h>
#include <stdlib.h>
/*Klavyede küçük harflerle girilen bir cümle içerisinde en fazla kullanılan
karakterlerin bulunmasıı saðlayan C programını yazınız.*/
int main()
{
    char cumle[150];
    char harf;
    int i;
    int encok;
    int kucukharf[26]={0};

    i = 0;
    printf("Lutfen bir cumle giriiz\n");
    gets(cumle);

    while(cumle[i])
    {
        if(cumle[i] >='a' && cumle[i]<='z')
        {
            kucukharf[cumle[i]-'a']++;
        }
        i++;
    }
    encok = kucukharf[0];
    for(i=1;i<26;i++)
    {
        if(kucukharf[i] != 0)
        {
            if(kucukharf[i]>encok)
            {
                encok = kucukharf[i];
                harf = i+ 'a';
            }
        }
    }
    printf("En fazla kullanilan harf : %c",harf);
    return 0;
}
