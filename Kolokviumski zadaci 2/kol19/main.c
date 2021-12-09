#include <stdio.h>
#include <stdlib.h>

void pomestuvanje (char *c, int x, int n)
{
    if(n >= 0)
    {
        if(*(c + n) >= 'a' && *(c + n) <= 'z')
        {
            pomestuvanje(c, x, n - 1);
            printf("%c", ((int)(*(c + n) - 'a' + x) % 26) + 'a');
        }
        else if(*(c + n) >= 'A' && *(c + n) <= 'Z')
        {
            pomestuvanje(c, x, n - 1);
            printf("%c", ((int)(*(c + n) - 'A' + x) % 26) + 'A');
        }
        else
        {
            pomestuvanje(c, x, n-1);
            printf("%c", *(c+n));
        }
    }
    else
    {
        return;
    }
}

int main()
{
    int n, x;
    scanf("%d%d\n", &n, &x);
    for(int i = 0; i < n; i++)
    {
        char red[80];
        fgets(red, 80, stdin);
        int i;
        for(i = 0; red[i] != '\n'; i++);
        pomestuvanje(red, x, i-1);
        printf("\n");
    }
    return 0;
}
