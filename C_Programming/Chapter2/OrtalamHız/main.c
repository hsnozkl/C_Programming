#include <stdio.h>
#include <stdlib.h>
#define YOL 450
/*Bir araban�n Ankara'dan �stanbul(450km)'a var�� zaman�n� saat cinsinden girdi
olarak alan ve araban�n orta�ama h�z�n� hesaplayan bir C program� yaz�n�z.*/
int main()
{
    float ortalama_hiz,saat;
    printf("Ankara-Istanbul arasinda kac saat gecirdiniz\n");
    scanf("%f",&saat);
    ortalama_hiz=YOL/saat;
    printf("Arabanin ortalama hizi : %f",ortalama_hiz);
    return 0;
}
