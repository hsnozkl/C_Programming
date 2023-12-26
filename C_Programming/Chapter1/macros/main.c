#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
#define circleArea(r) (PI*r*r)

int main()
{
    //printf("File :%s\n", __FILE__);
    //printf("Date :%s\n", __DATE__);
    //printf("Time :%s\n", __TIME__);
    //printf("Line :%d\n", __LINE__);
    //printf("STDC :%d\n", __STDC__);

    float yaricap,alan;
    printf("Lutfen yaricap degerini giriniz\n");
    scanf("%f",&yaricap);
    alan = circleArea(yaricap);
    printf("Alanimiz %.2f birim",alan);

    return 0;
}
