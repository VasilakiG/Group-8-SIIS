#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n, seq = 0, vk = 0;
    scanf("%d%d", &m, &n);
    int a[m][n];
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 0; i < m; i++)
    {
        seq = 0;
        for(int j = 0; j < n; j++)
        {
            if(a[i][j] == 0)
            {
                if(seq >= 3)
                {
                    vk++;
                    seq = 0;
                    break;
                }
                seq = 0;
            }
            if(a[i][j] == 1)
            {
                seq++;
            }
        }
        if(seq >= 3)
        {
            vk++;
        }
    }

    for(int i = 0; i < n; i++)
    {
        seq = 0;
        for(int j = 0; j < m; j++)
        {
            if(a[j][i] == 0)
            {
                if(seq >= 3)
                {
                    vk++;
                    seq = 0;
                    break;
                }
                seq = 0;
            }
            if(a[j][i] == 1)
            {
                seq++;
            }

        }
        if(seq >= 3)
        {
            vk++;
        }
    }
    printf("%d", vk);
    return 0;
}
