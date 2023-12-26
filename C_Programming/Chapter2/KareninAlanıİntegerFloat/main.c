#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,alan;
    printf("Karenin kenar uzunlugunu giriniz: ");
    scanf("%d",&x);
    alan = x*x;
    printf("Alan=%d\n",alan);

    float y,alan1;
    printf("Karenin kenar uzunlugunu giriniz: ");
    scanf("%f",&y);
    alan1 = y*y;
    printf("Alan=%.3f",alan1);
    return 0;
}
