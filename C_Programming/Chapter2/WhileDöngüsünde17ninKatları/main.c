#include <stdio.h>
#include <stdlib.h>
/*While d�ng�s� kullanarak 0 ile kullan�c�dan ald��� n say�s� aras�nda yer alan 17'nin
t�m tam say� katlar�n� ekrana bast�ran bir program yaz�n�z. Program�n�z� a�a��daki ekran g�r�nt�s�nde
g�z�kt��� gibi her sat�rda 10 adet say� olacak �ekilde d�zenleyin. �rnek:
bir limit belirleyin: 1000
  0  17  34  51  68  85 102 119 136 153
170 187 204 221 238 255 272 289 306 323*/
int main()
{
    int limit,i;
    int satir;

    printf("Lutfen bir limit degeri giriniz\n");
    scanf("%d",&limit);

    i = 0;
    satir = 0;

    while(i <=limit)
    {
        if(i%17==0)
        {
            printf("%5d",i);
            satir++;
            if(satir%10==0)
            {
                printf("\n");
            }
        }
        i++;
    }
    return 0;
}
