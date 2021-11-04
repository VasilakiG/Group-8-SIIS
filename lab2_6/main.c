#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int fl=n/10000+n%10, ssl=n%10000/1000+n%100/10, mid=n%1000/100;
    printf("%d %d %d", fl, ssl, mid);
    return 0;
}
