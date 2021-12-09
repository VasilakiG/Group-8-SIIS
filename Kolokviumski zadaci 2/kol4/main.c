#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int a[n][m];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int c, b;
    scanf("%d%d", &c, &b);
    int sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0;
    for(int i = 0; i < c; i++)
    {
        for(int j = 0; j < b; j++)
        {
            sum2 += a[i][j];
        }
    }

    for(int i = 0; i < c; i++)
    {
        for(int j = b; j < m; j++)
        {
            sum1 += a[i][j];
        }
    }

    for(int i = c; i < n; i++)
    {
        for(int j = 0; j < b; j++)
        {
            sum3 += a[i][j];
        }
    }

    for(int i = c; i < n; i++)
    {
        for(int j = b; j < m; j++)
        {
            sum4 += a[i][j];
        }
    }

    printf("%d %d %d %d", sum1, sum2, sum3, sum4);
    return 0;
}
