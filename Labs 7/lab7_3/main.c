#include <stdio.h>
#include <stdlib.h>

void readMatrix (int a[100][100], int n, int m)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}

int main()
{
    int n, m, a[100][100], minK, minP;
    scanf("%d%d", &n, &m);
    readMatrix(a, n, m);
    for(int i = 0; i < m; i++)
    {
        int zbirK = 0;
        for(int j = 0; j < n; j++)
        {
            zbirK += a[j][i];
        }
        if(!i)
        {
            minK = zbirK;
            minP = 0;
        }
        else if(zbirK < minK)
        {
            minK = zbirK;
            minP = i;
        }
    }
    printf("%d", minP);
    return 0;
}
