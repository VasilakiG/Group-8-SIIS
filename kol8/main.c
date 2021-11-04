#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, x, kont=0;
    scanf("%d%d", &n, &x);
    for(int i = n-1; i>= 0; i--)
    {
        for(int j = i; j >= 0; j /= 10)
        {
            kont=0;
            for(int k = x; k > 0; k /= 10)
            {
                if(j % 10 == k % 10)
                {
                    kont = 1;
                    break;
                }
            }
            if(kont == 1 || j == 0)
            {
                break;
            }
        }
        if(kont == 0)
        {
            printf("%d", i);
            break;
        }
    }
    return 0;
}
