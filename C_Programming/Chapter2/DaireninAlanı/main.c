#include <stdio.h>
#include <stdlib.h>
#define PI 3.141

int main()
{
    float yaricap,alan;
    printf("Lutfen yaricapi giriniz\n");
    scanf("%f",&yaricap);
    alan = PI*yaricap*yaricap;
    printf("Daire'nin alani: %f",alan);
    return 0;
}
