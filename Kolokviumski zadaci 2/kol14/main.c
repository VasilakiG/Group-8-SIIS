#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n][2*n], b[2 * n][n];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 2 * n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 2 * n; j++)
        {
            if(j >= n)
            {
                b[i + n][j - n] = a[i][j];
            }
            else
            {
                b[i][j] = a[i][j];
            }
        }
    }

    for(int i = 0; i < 2 * n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}
