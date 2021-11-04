#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z;
    scanf("%d%d%d", &x, &y, &z);
    int k=++x - --y + z++ + (x>z);
    int m=++x - --y + z++ + x>z;
    printf("%d %d", k, m);
    return 0;
}
