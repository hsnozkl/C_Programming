#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int can[2][2]={{4,6},{2,3}};
    printf("%d",can[0][1]);
    return 0;*/

    /*int mat[10][10];
    int i,j;

    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(i==j)
            {
                mat[i][j]=1;
            }
            else
            {
                mat[i][j]=0;
            }
        }
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            printf("%4d",mat[i][j]);
        }
        printf("\n");
    }
        return 0;*/

    /*int dizi1[3][4]={{1,2,5,7},{5,4,8,6},{7,1,6,5}};
    int dizi2[3][4]={{1,8,5,7},{1,2,4,6},{3,7,3,1}};
    int toplam[3][4];
    int i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            toplam[i][j]= dizi1[i][j] + dizi2[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%4d",toplam[i][j]);
        }
        printf("\n");
    }
    return 0;*/

    //kullanýcýdan 2 adet 3 e 2 lik matris deðerlerini alýnýz bunlarý bir 3 boyutlu
    //sayý dizisine atayýnýz hangi indexte hangi deðer var bunlarý bastýrýnýz

    int can[2][3][2];
    int i,j,k;

    printf("Lutfen 12 adet deger giriniz\n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<2;k++)
            {
                scanf("%d",&can[i][j][k]);
            }
        }
    }
    printf("Girdiginiz Degerler\n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<2;k++)
            {
                printf("can[%d][%d][%d] = %d\n",i,j,k,can[i][j][k]);
            }
        }
    }
    return 0;
}
