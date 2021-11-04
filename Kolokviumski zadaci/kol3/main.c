#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int zbirD = 0, zbirD1 = 0, n0, n1;
    for(int i = n-1; i > 0; i--)
    {
        zbirD = 0;
        n0 = i;
        for(int j = 1; j < i; j++)
        {
            if(i % j == 0) zbirD += j;
        }
        if(zbirD > zbirD1)
        {
            zbirD1 = zbirD;
            n1 = n0;
        }
    }
    printf("%d", n1);
    return 0;
}
