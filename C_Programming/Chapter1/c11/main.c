#include <stdio.h>
#include <stdlib.h>

/*klavyeden girilen ik say�n�n toplam�n�, fark�n� ve b�l�m�n� ger�ekle�tiren c
    program�n� fonksiyon kullanmadan ve fonksiyon kullanarak yaz�n�z*/

float dortislem(float sayi1,float sayi2,char islem)
{
    if(islem == '+')
    {
        return sayi1 + sayi2;
    }
    else if(islem == '-')
    {
        return sayi1 - sayi2;
    }
    else if(islem == '*')
    {
        return sayi1 * sayi2;
    }
    else if(islem == '/')
    {
        return sayi1 / sayi2;
    }
    else
    {
        printf("Yanlis oparotor girdiniz");
    }
}
int main()
{

    float sayi1,sayi2;
    char islem;

    printf("Hangi islemi yaptirmak istiyosunuz (+ - * /) \n");
    scanf("%c",&islem);

    printf("Lusfen 2 adet sayi giriniz\n");
    scanf("%f%f",&sayi1,&sayi2);

    printf("Islemin sonucu %.2f",dortislem(sayi1,sayi2,islem));

    return 0;
}
/*int main()
{

    float sayi1,sayi2;
    char islem;

    printf("Hangi islemi yaptirmak istiyosunuz (+ - * /) \n");
    scanf("%c",&islem);

    printf("Lusfen 2 adet sayi giriniz\n");
    scanf("%f%f",&sayi1,&sayi2);

    printf("Islemin sonucu %.2f",dortislem(sayi1,sayi2,islem));

    if(islem == '+')
    {
        printf("Islemin sonucu %.2f",sayi1+sayi2);
    }
    else if(islem == '-')
    {
        printf("Islemin sonucu %.2f",sayi1-sayi2);
    }
    else if(islem == '*')
    {
        printf("Islemin sonucu %.2f",sayi1*sayi2);
    }
    else if(islem == '/')
    {
        printf("Islemin sonucu %.2f",sayi1/sayi2);
    }
    else
    {
        printf("Yanlis oparotor girdiniz");
    }
    return 0;
}*/

