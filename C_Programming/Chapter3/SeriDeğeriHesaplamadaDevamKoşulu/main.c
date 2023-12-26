#include <stdio.h>
#include <stdlib.h>
/*Bir pozitif tam sayý olan n deðeri ile bir reel sayý olan x deðerini girdi
olarak alan ve 1/x^2+3/x^4+5/x^6+7/x^8+...+2n-1/x^2n serisini hesaplayan
program yazýnýz.
Egzersiz 5 de verilen seri hesaplamasýný birden fazla n ve x çiftleri için
hesaplayacak þekilde yeniden yazýnýz. Programda her seri hesaplamasýndan sonra
kullanýcýya devam edilip edilmeyeceði sorulmalýdýr. Kullanýcý devam etmek
istiyorsa evet anlamýnda 'E' veya 'e' girilmelidir. Diðer karakter giriþlerinde
ise program sonlandýrýlmalýdýr.*/
int main()
{
    int i,n;
    float x,seri;
    char devam;

    do
    {
    printf("Pozitif sayi giriniz:\n");
    scanf("%d",&n);
    printf("Reel sayi :");
    scanf("%f %c",&x,&devam);
    for(i=1;i<=2*n-1;i+=2)
    {
        seri+=i/pow(x,i+1);
    }
    printf("Seri = %f\n",seri);
    }
    while((devam=='E') || (devam=='e'));
    printf ("Hoscakalin");
    return 0;
}
