#include <stdio.h>
#include <stdlib.h>
/*Bir pozitif tam say� olan n de�eri ile bir reel say� olan x de�erini girdi
olarak alan ve 1/x^2+3/x^4+5/x^6+7/x^8+...+2n-1/x^2n serisini hesaplayan
program yaz�n�z.
Egzersiz 5 de verilen seri hesaplamas�n� birden fazla n ve x �iftleri i�in
hesaplayacak �ekilde yeniden yaz�n�z. Programda her seri hesaplamas�ndan sonra
kullan�c�ya devam edilip edilmeyece�i sorulmal�d�r. Kullan�c� devam etmek
istiyorsa evet anlam�nda 'E' veya 'e' girilmelidir. Di�er karakter giri�lerinde
ise program sonland�r�lmal�d�r.*/
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
