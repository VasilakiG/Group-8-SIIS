#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, p0 = 0, p1 = 0, p2 = 0, p3 = 0, p4 = 0, max = -1, maxp = -1, k = -1;
    for(i = 0; ; i++)
    {
        if(scanf("%d", &n))
        {
            for(max = n % 10, k = 0, maxp = 0; n > 0; n /= 10, k++)
        {
            if(n % 10 > max)
            {
                max = n % 10;
                maxp = k;
            }
        }
        switch(maxp)
                {
                    case 0:
                        p0++;
                        break;
                    case 1:
                        p1++;
                        break;
                    case 2:
                        p2++;
                        break;
                    case 3:
                        p3++;
                        break;
                    case 4:
                        p4++;
                        break;
                    default:
                        break;
                }
        }
        else
            break;
    }

    printf("0: %d\n1: %d\n2: %d\n3: %d\n4: %d", p0, p1, p2, p3, p4);

    return 0;
}
