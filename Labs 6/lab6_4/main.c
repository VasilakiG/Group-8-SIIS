#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, zbirG = 0, zbirS = 0, zbirPr = 0, zbirPo = 0;
    scanf("%d", &n);
    int a[n][n];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
            if(i == j)
            {
                zbirG += a[i][j];
            }
            if(j == n - i - 1)
            {
                zbirS += a[i][j];
            }

            if(j == 0)
            {
                zbirPr += a[i][j];
            }
            else if(j == n - 1)
            {
                zbirPo += a[i][j];
            }
        }
    }
    printf("%d\n%d", zbirG - zbirS, zbirPr - zbirPo);
    return 0;
}
