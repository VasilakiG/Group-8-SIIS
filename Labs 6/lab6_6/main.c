#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100][100], n, poc, maxDol = 0, dol;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(int i = 0; i < n; i++)
    {
        poc = 1, dol = 0;
        for(int j = 0; j < n - 1; j++)
        {
            if(poc && a[i][j + 1] > a[i][j])
            {
                dol = 1;
                poc = 0;
            }
            else if(a[i][j + 1] > a[i][j])
            {
                dol++;
            }
            else
            {
                poc = 1;
            }
            if(dol > maxDol)
            {
                maxDol = dol;
            }

        }
    }

    printf("%d", maxDol + 1);
    return 0;
}
