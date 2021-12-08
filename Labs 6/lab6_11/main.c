#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n][n], rez[2][2]={0};
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 0; i < n/2; i++)
    {
        for(int j = 0; j < n/2; j++)
        {
            rez[0][0] += a[i][j];
        }
    }

    for(int i = 0; i < n/2; i++)
    {
        for(int j = n - n/2; j < n; j++)
        {
            rez[0][1] += a[i][j];
        }
    }

    for(int i = n - n/2; i < n; i++)
    {
        for(int j = 0; j < n/2; j++)
        {
            rez[1][0] += a[i][j];
        }
    }

    for(int i = n - n/2; i < n; i++)
    {
        for(int j = n - n/2; j < n; j++)
        {
            rez[1][1] += a[i][j];
        }
    }

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            printf("%d ", rez[i][j]);
        }
        printf("\n");
    }
    return 0;
}
