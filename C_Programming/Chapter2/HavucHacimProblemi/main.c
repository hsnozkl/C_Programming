#include <stdio.h>
#include <stdlib.h>

int main()
{
    float en,boy,yukseklik,metrekup;
    printf("Havuzumuzun eni boyu ve yuksekligini :");
    scanf("%f%f%f",&en,&boy,&yukseklik);
    metrekup = en*boy*yukseklik;
    printf("Havuzumuz %.2f kadar su alabilir.",metrekup);
    return 0;
}
