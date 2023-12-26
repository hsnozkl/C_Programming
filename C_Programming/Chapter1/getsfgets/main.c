#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    /*char name[30];
    printf("Lutfen isminizi giriniz\n");
    gets(name);
    printf("%s",name);

    return 0;*/

    char name[30];
    printf("Lutfen isminizi giriniz\n");
    fgets(name,sizeof(name),stdin);
    printf("%s",name);

    return 0;
}
