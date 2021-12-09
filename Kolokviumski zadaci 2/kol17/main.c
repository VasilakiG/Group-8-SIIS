#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n;
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
        int levZbir = 0, desenZbir = 0;
        for(int j = 0; j < n - n / 2; j++)
        {
            levZbir += a[i][j];
        }
        for(int j = n / 2; j < n; j++)
        {
            desenZbir += a[i][j];
        }
        if(n % 2 == 0)
        {
            a[i][n/2 - 1] = a[i][n / 2] = abs(levZbir - desenZbir);
        }
        else
        {
            a[i][n/2] = abs(levZbir - desenZbir);
        }
        for(int j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
