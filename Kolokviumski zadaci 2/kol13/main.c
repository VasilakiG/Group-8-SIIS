#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n, x;
    scanf("%d%d%d", &x, &m, &n);
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
        int sumaRed = 0, br;
        for(int j = 0; j < n; j++)
        {
            sumaRed += a[i][j];
        }
        if(sumaRed > x)
        {
            br = 1;
        }
        else if(sumaRed < x)
        {
            br = -1;
        }
        else
        {
            br = 0;
        }
        for(int j = 0; j < n; j++)
        {
            a[i][j] = br;
        }
    }

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
