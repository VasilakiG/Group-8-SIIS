#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c, k, p, v, b, m, d, km;
    scanf("%d%d%d%d%d%d%d%d", &km, &c, &k, &p, &v, &b, &m, &d);
    int pK=c+(km-k)*p;
    int vK=b+d*km+(km/v)*m;
    printf("%d %d\n%d", pK, vK, pK<=vK);
}
