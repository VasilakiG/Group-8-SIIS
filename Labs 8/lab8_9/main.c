#include <stdio.h>
#include <stdlib.h>

void triagolnik (int n)
{
    if(n > 0)
    {
        triagolnik(n-1);
        printf("%d", n);
    }

}

void sema (int n)
{
    if(n > 0)
    {
        sema(n-1);
        triagolnik(n);
        printf("\n");
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    sema(n);
    return 0;
}
