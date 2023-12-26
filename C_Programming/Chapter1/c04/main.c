#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 4 den sonrasýný almaz
    /* int i;
    for(i = 0; i < 10; i++)
    {
        printf("%d\n",i);
        if(i == 4)
        {
            break;
        }
    }

    return 0; */

    // 3 den sonrasýný almaz
    /* int i;
    for(i = 0; i < 10; i++)
    {
         if(i == 4)
        {
            break;
        }
        printf("%d\n",i);
    }

    return 0; */

    /* int i;
    for(i = 0; i < 10; i++)
    {
        if(i == 5)
        {
            continue;
        }
        printf("%d\n",i);

    }

    return 0;*/

    int i;
    for(i = 0; i < 10; i++)
    {
        if(i == 5)
        {
            continue;
        }
        if(i == 8)
        {
            break;
        }
        printf("%d\n",i);

    }

    return 0;
}
