#include <stdio.h>
#include <stdlib.h>
/*Bir pozitif tam say� olan n de�eri ile bir reel say� olan x de�erini girdi
olarak alan ve 1/x^2+3/x^4+5/x^6+7/x^8+...+2n-1/x^2n serisini hesaplayan
program yaz�n�z.*/
int main()
{
    int i,n;
    float x,seri;

    printf("Pozitif sayi giriniz:\n");
    scanf("%d",&n);
    printf("Reel sayi :");
    scanf("%f",&x);
    for(i=1;i<=2*n-1;i+=2)
    {
        seri+=i/pow(x,i+1);
    }
    printf("Seri = %f",seri);
    return 0;
}
