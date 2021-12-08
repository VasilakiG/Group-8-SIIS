#include <stdio.h>
#include <stdlib.h>

int f (int n)
{
    if(n == 0) return 0;
    else
    {
        return n % 10 + f(n / 100);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", f(n / 10));
    return 0;
}
