#include <stdio.h>
#include <stdlib.h>
/*Klavyeden girilen bir kelimenin harflerini bir harf artt�rarak a�a��daki gibi
yazan C program�n� yaz�n�z.
Kelime giriniz: canan
c
c a
c a n
c a n a
c a n a n*/
int main()
{
    char kelime[100];
    int i;
    int j;

    i = 0;
    j = 0;
    printf("Lutfen bir kelime giriniz\n");
    gets(kelime);

    while(i<strlen(kelime))
    {
        j = 0;
        while(j<=i)
        {
            printf("%c",kelime[j]);
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
