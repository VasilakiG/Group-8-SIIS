#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d sekundi se %d casovi, %d minuti i %d sekundi", n, n/3600, n%3600/60, n%3600%60);
}
