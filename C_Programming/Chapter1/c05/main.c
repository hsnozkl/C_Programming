#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* int day = 5;
    switch(day)
    {
        case 1:printf("Pazartesi\n");
        break;
        case 2:printf("Salý\n");
        break;
        case 3:printf("Carsamba\n");
        break;
        case 4:printf("Persembe\n");
        break;
        case 5:printf("Cuma\n");
        break;
        case 6:printf("Cumartesi\n");
        break;
        case 7:printf("Pazar\n");
        break;
        default:printf("Gecersiz gün");
        break;
    }
    return 0; */

    /*if(day == 1)
    {
        printf("Pazartesi");
    }
    else if(day == 2)
    {
        printf("Sali");
    }
     else if(day == 3)
    {
        printf("Carsamba");
    }
     else if(day == 4)
    {
        printf("Persembe");
    }
     else if(day == 5)
    {
        printf("Cuma");
    }
     else if(day == 6)
    {
        printf("Cumartesi");
    }
     else if(day == 7)
    {
        printf("Pazar");
    }
    else
    {
        printf("Boyle bir gun yok");
    }
    return 0; */

    float a,b;
    char op;

    printf("Lutfen oparetor giriniz\n");
    scanf("%c",&op);

    printf("Lutfen 2 adet sayi giriniz\n");
    scanf("%f%f",&a,&b);

    switch(op)
    {
        case '+' :printf("%.2f + %.2f =%.2f",a,b,a+b);
        break;
        case '-' :printf("%.2f - %.2f =%.2f",a,b,a-b);
        break;
        case '/' :printf("%.2f / %.2f =%.2f",a,b,a/b);
        break;
        case '*' :printf("%.2f * %.2f =%.2f",a,b,a*b);
        break;
        default:printf("Hatali giris yaptiniz");
    }
    return 0;
}
