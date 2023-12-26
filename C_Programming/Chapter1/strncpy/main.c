#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char can[] = "Benim adim Can Boz";
    char canan[100] = "";

    strncpy(canan,can,6);
    printf("%s",canan);
    return 0;
}
