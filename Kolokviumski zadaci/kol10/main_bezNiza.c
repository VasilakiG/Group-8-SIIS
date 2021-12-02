#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, prvCiklus = 1, vtorCiklus = 1, br = 0;

    while(scanf("%d", &n))
    {
        prvCiklus = 0;
        vtorCiklus = 0;
        int temp = n;
        for(int i = n, br = 0; i > 10 && temp >= 10; i /= 10, br++)
        {
            if(i % 10 > i / 10 % 10 && br % 2 == 0)
            {
                prvCiklus = 1;
            }
            else if(i % 10 < i / 10 % 10 && br % 2 != 0)
            {
                prvCiklus = 1;
            }
            else
            {
                prvCiklus = 0;
                break;
            }
        }

        for(int i = n, br = 0; i > 10 && prvCiklus == 0 && temp >= 10; i /= 10, br++)
        {
            if(i % 10 < i / 10 % 10 && br % 2 == 0)
            {
                vtorCiklus = 1;
            }
            else if(i % 10 > i / 10 % 10 && br % 2 != 0)
            {
                vtorCiklus = 1;
            }
            else
            {
                vtorCiklus = 0;
                break;
            }
        }

        if(prvCiklus || vtorCiklus) printf("%d\n", n);

    }

    return 0;
}
