#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char bos[100];

    strcpy(bos,"Benim");

    strcat(bos," adim");
    strcat(bos," Can Boz");

    printf("%s",bos);
    return 0;
}
