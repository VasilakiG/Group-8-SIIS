#include <stdio.h>
#include <stdlib.h>

void triagolnik (int n)
{
    if(n > 0)
    {
        triagolnik(n-1);
        printf("%d ", n);
    }
}

void sema (int n)
{
    if(n == 0) return;
    else
    {
        triagolnik(n);
        printf("\n");
        sema(n-1);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    sema(n);
    return 0;
}
