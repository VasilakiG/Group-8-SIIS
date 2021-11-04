#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    if(n % 100 > 0 && n / 100000 % 10 > 0)
    {
        if((n % (n / 100000) == 0 && n % (n % 10 + n % 100 / 10) != 0) || n % (n / 100000 % 10) != 0 && n % (n % 10 + n % 100 / 10) != 0)
            printf("DA");
        else printf("NE");
    }
    else printf("Nevaliden broj");
}
