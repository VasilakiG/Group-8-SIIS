#include <stdio.h>
#include <stdlib.h>

int maxCifra (int n)
{
    if(n == 0)
    {
        return 0;
    }
    else if(n % 10 > maxCifra(n / 10))
    {
        return n % 10;
    }
    else return maxCifra(n / 10);
}

int main()
{
    int n;
    while(scanf("%d", &n))
    {
        printf("%d\n", maxCifra(n));
    }
    return 0;
}
