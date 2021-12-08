#include <stdio.h>
#include <stdlib.h>

int rastecki (int n)
{
    if(n < 10) return 1;
    else if(n % 10 > n % 100 / 10)
    {
        rastecki(n / 10);
    }
    else return 0;

}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        int m;
        scanf("%d", &m);
        if(rastecki(m))
        {
            printf("DA\n");
        }
        else printf("NE\n");
    }
    return 0;
}
