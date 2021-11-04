#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tr, t1, t2, t3, t4, t5;
    scanf("%d%d%d%d%d%d", &tr, &t1, &t2, &t3, &t4, &t5);
    int tr1=tr+t1+t2+t3+t4+t5;
    printf("%d", tr1>0);
    return 0;
}
