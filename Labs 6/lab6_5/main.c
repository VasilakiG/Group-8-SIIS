#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a[100];
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        int m, k;
        scanf("%d", &m);
        for(int j = 0; j < m; j++)
        {
            scanf("%d", &a[j]);
        }
        scanf("%d", &k);
        for(int l = k - 1; l < m; l += k)
        {
            int temp = a[l];
            a[l] = a[l - 1];
            a[l - 1] = temp;
        }
        for(int j = 0; j < m; j++)
        {
            printf("%d ", a[j]);
        }
        printf("\n");
    }
    return 0;
}
