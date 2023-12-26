#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char can[100];

    printf("Lutfen bir text giriniz\n");
    fgets(can,sizeof(can),stdin);

    printf("Girdiginiz ifade %s\n",can);
    printf("Girdiginiz ifadenin buyuk harflere donusturulmus hali %s\n",strupr(can));

    return 0;
}
