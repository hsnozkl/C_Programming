#include <stdio.h>
#include <stdlib.h>
/*Kullan�c�dan b�y�k harf tipinde karakter girmesini isteyin. E�er girdi�iniz
karakter b�y�k harf ise k���k harf olarak bast�r�n. E�er girdi�iniz karakter k���k
harfse ekrana hata mesaj� bast�r�n.*/
int main()
{
    char a;
    printf("Lutfen bir karakter giriniz :");
    scanf("%c",&a);
    if((a>='A') && (a<='Z'))
    {
        //a+=31;
        //a++;

        printf("Karakterimiz :%c\n",tolower(a));
    }
    else
    {
        printf("Yanlis bir karakter girdiniz");
    }
    return 0;
}
