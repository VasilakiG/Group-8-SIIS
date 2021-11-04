#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, br = 0, zbir = 0;
    scanf("%d%d", &a, &b);
    for( ; a <= b; a++)
    {
        zbir = 0;
        for(int i = a; i > 0; i /= 10)
        {
            if((i % 10) % 2 == 0)
            {
                zbir += i % 10;
            }
        }
        if(zbir > 0 && zbir % 4 == 0)
        {
            printf("%d\n", a);
            br++;
        }
    }
    printf("Vkupno: %d", br);
    return 0;
}
