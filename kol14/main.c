#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n[1000], i, max = 0, zbirC = 0;
    printf("%c", c);
    for(i = 0; ; i++)
    {

        if(scanf("%d", &n[i])) ;
        else
            break;
    }
    for(int j = 0; j < i; j++)
    {
        zbirC = 0;
        printf("%d: ", n[j]);
        zbirC += max;
        for(max = -1; n[j] > 0; n[j] /= 10)
        {
            if(n[j] % 10 > max)
            {
                max = n[j] % 10;
                zbirC += n[j] % 10;
            }
            else
            {
                zbirC += n[j] % 10;
            }

        }
        printf("%d\n", zbirC);
    }
}
