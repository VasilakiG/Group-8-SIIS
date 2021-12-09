#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    int a[m][n];
    float arit[m];
    for(int i = 0; i < m; i++)
    {
        int zbir = 0;
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
            zbir += a[i][j];
        }
        arit[i] = zbir/(float)n;
    }

    float maxRaz;
    int maxPos;

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(!j)
            {
                maxRaz = fabs(arit[i] - a[i][j]);
                maxPos = 0;
            }
            else if(fabs(arit[i] - a[i][j]) > maxRaz)
            {
                maxRaz = fabs(arit[i] - a[i][j]);
                maxPos = j;
            }
        }
        printf("%d ", a[i][maxPos]);
    }


    return 0;
}
