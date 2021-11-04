#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d, m, g;
    scanf("%d%d%d", &d, &m, &g);
    if(m >= 1 && m <= 12)
    {
        if(m <= 7 && m % 2 != 0 && m != 2)
        {
            if((d >=1 && d <= 31))
            {
                printf("DA");
            }
            else printf("NE");
        }
        else if(m <= 7 && m % 2 == 0 && m != 2)
        {
            if((d >=1 && d <= 30))
            {
                printf("DA");
            }
            else printf("NE");
        }
        else if(m >= 8 && m % 2 == 0)
        {
            if((d >=1 && d <= 31))
            {
                printf("DA");
            }
            else printf("NE");
        }
        else if(m >= 8 && m % 2 != 0)
        {
            if((d >=1 && d <= 30))
            {
                printf("DA");
            }
            else printf("NE");
        }
        else if(m == 2)
        {
            if((g % 4 == 0 && g % 100 != 0) || g % 400 == 0)
            {
                if((d >=1 && d <= 29))
                {
                    printf("DA");
                }
                else printf("NE");
            }
            else if((d >=1 && d <= 28))
            {
                printf("DA");
            }
            else printf("NE");
        }
        else printf("NE");
    }
    else printf("NE");
    return 0;
}
