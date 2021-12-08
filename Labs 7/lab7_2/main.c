#include <stdio.h>
#include <stdlib.h>

void elka (int n)
{
    for(int i = 0; i < n - n/2; i++)
    {
        for(int j = 0; j < (n - 1) / 2 - i; j++)
        {
            printf(" ");
        }
        for(int j = n / 2 - i; j < (n - 1) / 2 + 1 + i; j++)
        {
            printf("*");
        }
        for(int j = (n - 1) / 2 + 1 + i; j < n; j++)
        {
            printf(" ");
        }
        printf("\n");
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    elka(n);
    return 0;
}
