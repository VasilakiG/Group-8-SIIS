#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if(a[i] % 2 == 0)
        {
            a[i]++;
        }
        else a[i]--;
        printf("%d ", a[i]);
    }
    return 0;
}
