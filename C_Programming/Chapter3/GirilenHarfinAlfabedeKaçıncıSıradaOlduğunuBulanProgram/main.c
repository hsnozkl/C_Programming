#include <stdio.h>
#include <stdlib.h>
/*�ngiliz alfabesinden herhangi bir b�y�k veya k���k harfi ch de�i�kenine okuyan
ve bu harfin alfabede ka��nc� harf oldu�unu bulan bir C program� yaz�n�z.
(�pucu: B�y�k harf i�in (int) ch-(int)'A'+1, k���k harf i�in (int) ch- (int)'a'+1
 ifadelerini kullanabilirsiniz.) */
int main()
{
    char ch;
    int sira;
    printf("Bir karakter giriniz\n");
    scanf("%c",&ch);
    if((ch>='A')&&(ch<='Z'))
    {
        sira=(int)ch-(int)'A'+1;
    }
    else if((ch>='a')&&(ch<='z'))
    {
        sira=(int)ch-(int)'a'+1;
    }
    else
    {
        printf("Lutfen bir harf giriniz. Boyle bir harf yoktur.");
    }
    printf("%c : %d. harftir",ch,sira);
    return 0;
}
