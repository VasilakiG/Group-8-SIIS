#include <stdio.h>
#include <stdlib.h>

int n;

void printArray(int array[])
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
}

int main()
{
    scanf("%d", &n);
    int a[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printArray(a);
    printf("\n");

    for(int i = 0; i < n-n/2; i++)
    {
        int temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }

    printArray(a);

    for(int i = 1; i < n; i++)
    {
        for(int j = i; j < (n - 1); j++)
        {
            a[j] = a[j + 1];
        }
        n--;
    }

    printf("\n");

    printArray(a);

    for(int i = 0; i < n-n/2; i++)
    {
        int temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }

    printf("\n");

    printArray(a);
    return 0;
}
