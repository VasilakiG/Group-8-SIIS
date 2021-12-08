#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a[100];
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        int m, ogledalni = 0;
        scanf("%d", &m);
        for(int j = 0; j < m; j++)
        {
            scanf("%d", &a[j]);
        }
        for(int j = 0; j <= m - j - 1; j++)
        {
            if(a[j] == a[m - j - 1])
            {
                ogledalni++;
            }
        }
        if(m % 2 != 0)
        {
            ogledalni *= 2;
            ogledalni--;
        }
        else ogledalni *= 2;
        printf("%.2f%%\n", (float)ogledalni / m * 100);
    }
    return 0;
}
