#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n, br = 0;
    scanf("%d%d", &m, &n);
    int a[m + 2][n + 2], b[m + 2][n + 2];
    for(int i = 0; i < m + 2; i++)
    {
        for(int j = 0; j < n + 2; j++)
        {
            a[i][j] = -1;
            b[i][j] = -1;
        }
    }

    for(int i = 1; i < m + 1; i++)
    {
        for(int j = 1; j < n + 1; j++)
        {
            scanf("%d", &a[i][j]);
            b[i][j] = a[i][j];
        }
    }

    for(int i = 1; i <= m; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            br = 0;
            if(a[i][j] == 0)
            {
                {
                    for(int k = i - 1; k < i + 2; k++)
                    {
                        for(int l = j - 1; l < j + 2; l++)
                        {
                            if(a[k][l] == 1)
                            {
                                br++;
                            }
                        }
                    }
                }


                b[i][j] = br;
            }
        }

    }

    for(int i = 1; i < m + 1; i++)
    {
        for(int j = 1; j < n + 1; j++)
        {
            if(a[i][j] == 1)
            {
                printf("* ");
            }
            else printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
