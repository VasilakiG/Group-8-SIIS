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
        printf("%d ", a[i]);
    }

    printf("\n");

    for(int i = 0; i < n-n/2; i++)
    {
        int temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }

    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    for(int i = 1; i < n; i++)
    {
        for(int j = i; j < (n - 1); j++)
        {
            a[j] = a[j + 1];
        }
        n--;
    }

    printf("\n");

    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    for(int i = 0; i < n-n/2; i++)
    {
        int temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }

    printf("\n");

    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
