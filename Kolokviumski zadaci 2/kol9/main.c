#include <stdio.h>
#include <stdlib.h>

int global;

double dropka (int *a, int n)
{
    if(global == 1)
    {
        return *a;
    }
    if(n == 0)
    {
        return *(a + n) + 1. / dropka(a, n + 1);
    }
    else if(n < global - 1)
    {
        return *(a + n) + 1. / dropka(a, n + 1);
    }
    else return *(a + n);
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    global = n;
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("%f", dropka(a, 0));
    return 0;
}
