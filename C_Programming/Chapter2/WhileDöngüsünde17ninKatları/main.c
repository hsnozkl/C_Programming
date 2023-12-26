#include <stdio.h>
#include <stdlib.h>
/*While döngüsü kullanarak 0 ile kullanýcýdan aldýðý n sayýsý arasýnda yer alan 17'nin
tüm tam sayý katlarýný ekrana bastýran bir program yazýnýz. Programýnýzý aþaðýdaki ekran görüntüsünde
gözüktüðü gibi her satýrda 10 adet sayý olacak þekilde düzenleyin. Örnek:
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
