#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n, br = 0;
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
        for(int j = 0; j < m; j++)
        {
            br = 0;
            if(a[i][j] == 0)
            {

                if(i >= 1 && j >= 1 && i < m-1 && j < n-1)
                {
                    for(int k = i-1; k < i+2; k++)
                    {
                        for(int l = j - 1; l < j + 2; j++)
                        {
                            if(a[k][l] == 1)
                            {
                                br++;
                            }
                        }
                    }
                }
            }
            a[i][j] = br;
        }

    }

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
