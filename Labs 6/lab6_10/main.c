#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, k;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &k);
    for(int j = 0; j < n; j++)
    {
        for(int i = 0; i < n - 1; i++)
        {
            if(a[i] >= k && a[i + 1] < k)
            {
                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
