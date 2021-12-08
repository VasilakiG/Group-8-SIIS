#include <stdio.h>
#include <stdlib.h>

int nzd (int a, int b)
{
    if (b == 0)
        return a;
    return nzd(b, a % b);

}

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    printf("%d", nzd(n, m));
    return 0;
}
