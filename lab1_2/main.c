#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d*5000\n%d*1000\n%d*500\n%d*100\n%d*50\n%d*10\n%d*5\n%d*2\n%d*1", n/5000, n%5000/1000, n%5000%1000/500, n%5000%1000%500/100, n%5000%1000%500%100/50, n%5000%1000%500%100%50/10, n%5000%1000%500%100%50%10/5, n%5000%1000%500%100%50%10%5/2, n%5000%1000%500%100%50%10%5%2);
    return 0;
}