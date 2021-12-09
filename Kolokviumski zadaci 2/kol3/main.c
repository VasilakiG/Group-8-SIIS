#include <stdio.h>
#include <stdlib.h>

int sum_pos (int *a, int n, int ind)
{
    int sum = 0;
    if(ind > n)
    {
        return 0;
    }
    else
    {
        for(int i = ind; i < n; i++)
        {
            sum += *(a + i);
        }
        return sum;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n], ind;
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &(*(a+i)));
    }
    scanf("%d", &ind);
    printf("%d", sum_pos(a, n, ind));
    return 0;
}
