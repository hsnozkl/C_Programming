#include <stdio.h>
#include <stdlib.h>
/*Klavyeden girilen bir c�mlenin harflerinin alt alta yazd�r�lmas� sa�layan C
program�n� yaz�n�z.*/
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
