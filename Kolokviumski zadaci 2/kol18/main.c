#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    float a[n][n], b[n][n];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%f", &a[i][j]);
        }
    }
    float x = 0, y = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(j < i)
            {
                x += a[i][j];
            }

            if(i + j >= n)
            {
                y += a[i][j];
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i == j)
            {
                b[i][j] = x;
            }
            else if(j == n - i - 1)
            {
                b[i][j] = y;
            }
            else
            {
                b[i][j] = 0;
            }
        }
    }

    if(n % 2 != 0)
    {
        b[n / 2][n / 2] = x + y;
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%.1f ", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}
