#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    /*char can[100];

    printf("Lutfen bir text giriniz\n");
    scanf("%s",&can);

    printf("Girdiginiz ifade %s\n",can);
    printf("Girdiginiz ifadenin kucuk harflere donusturulmus hali %s\n",strlwr(can));

    return 0;*/

    char can[100];

    printf("Lutfen bir text giriniz\n");
    fgets(can,sizeof(can),stdin);

    printf("Girdiginiz ifade %s\n",can);
    printf("Girdiginiz ifadenin kucuk harflere donusturulmus hali %s\n",strlwr(can));

    return 0;
}
